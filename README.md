# Planification d'un Rover Explorateur Spatial avec Madagascar

## Introduction

Notre projet s'inscrit pleinement dans les tendances actuelles, où la planification reste une méthode dominante utilisée par les robots d'exploration spatiale. Ces robots, appelés "rovers", depuis leurs débuts et encore aujourd'hui, s'appuient largement sur des algorithmes de planification pour effectuer leurs missions. Dans le cadre de notre projet, nous avons choisi de modéliser un robot chargé de collecter différents échantillons et de les ramener à sa base tout en respectant un ensemble de contraintes spécifiques.

L’objectif est de concevoir un planificateur pour un rover spatial qui doit :

- Explorer un terrain inconnu (modélisé sous forme d'une grille).
- Collecter des échantillons à différents endroits.
- Revenir à sa base tout en gérant ses ressources (énergie, contraintes de déplacement).

## Définition de l’Environnement et des Éléments du Problème

Madagascar fonctionne sur un principe de planification. Nous devons donc structurer notre problème sous forme d'états et d'actions.

### 2.1 Définition de la Grille Spatiale

Nous modélisons notre terrain sous forme d’une grille 2D avec des cases accessibles et inaccessibles.

**Exemple de grille 5x5 :**

|   | 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|---|
| **0** | 🟩 | 🟩 | ⛰ | 🟩 | 🪨 |
| **1** | 🟩 | ⛰ | 🟩 | ⛰ | 🟩 |
| **2** | 🟩 | 🟩 | 🤖 | 🟩 | 🟩 |
| **3** | 🟩 | 🟩 | 🟩 | 🪫 | 🟩 |
| **4** | 🟩 | 🪨 | ⛰ | 🟩 | 🏠 |

**Légende :**

- 🟩 : Cases accessibles
- ⛰ : Cratères (cases bloquées)
- 🤖 : Position initiale du rover
- 🪫 : Station de recharge du rover
- 🪨 : Échantillons à collecter (léger ou lourd)
- 🏠 : Base du rover (objectif final)

### 2.2 États et Objectif du Problème

**État initial :**

- Le rover est à une certaine position avec une certaine énergie.
- Il n’a collecté aucun échantillon.

**État final :**

- Le rover est à la base.
- Il a ramassé tous les échantillons.

### 2.3 Actions Possibles pour Madagascar

Notre rover peut effectuer les actions suivantes :

- Se déplacer : haut, bas, gauche, droite (si la case est libre).
- Ramasser un échantillon (si la case en contient un).
- Recharger sa batterie (si il est à une station de recharge).
- Terminer sa mission (si à la base et tous les échantillons collectés).

**Exemples de règles (selon l’exemple de la grille 5x5) :**

- "Si je suis en (2,2) et que (3,2) est libre, je peux aller en (3,2)".
- "Si je suis en (4,1) et que cette case contient un échantillon, je peux le collecter".
- "Si je suis en (3,3) et que cette case contient une zone de charge, je peux charger mes batteries".
- "Si je suis à la position (4,4) avec tous les échantillons, mission terminée".

## Transformation en Format SAT pour Madagascar

Madagascar utilise un formalisme SAT qui représente :

- **Les états sous forme de variables.**
- **Les transitions (actions) sous forme de clauses logiques.**

### 3.1 Définition des Variables

**Predicates :**

- `at(r, l)` → Le rover `r` est en position `l` (location).
- `base-at(b, l)` → La base est en position `l`.
- `sample-at(s, l)` → Le sample `s` est en position `l`.
- `has-sample(r, s)` → Le rover `r` a collecté l’échantillon `s`.
- `light-sample(s)` → Le sample `s` est léger.
- `heavy-sample(s)` → Le sample `s` est lourd.
- `fully-charged(r)` → Le rover `r` est complètement chargé.
- `mid-battery(r)` → Le rover `r` est à moitié chargé.
- `low-battery(r)` → Le rover `r` est déchargé.
- `charging-station(l)` → Il y a une station de rechargement en position `l`.
- `carrying(r)` → Le rover `r` tient un objet.
- `delivered(s)` → Le sample `s` est délivré.
- `adjacent(l1, l2)` → La position `l1` est adjacente à `l2`.
- `crater(l1, l2)` → Il y a un cratère en position `l1,l2`.

**Actions :**

- `Move(r, l1, l2)` → Le rover `r` bouge de `l1` à `l2`.
- `recharge-low-to-high(r, l)` → Le rover recharge totalement sa batterie à une station.
- `collect-light-sample-fully-charged(r, s, l)` → Le rover ramasse un sample léger lorsqu'il est complètement chargé.
- `collect-light-sample-half-charged(r, s, l)` → Le rover ramasse un sample léger lorsqu'il est à moitié chargé.
- `collect-heavy-sample(r, s, l)` → Le rover ramasse un sample lourd lorsqu'il est déchargé.
- `deliver-sample(r, b, l, s)` → Le rover dépose le sample `s` à la base.

### 3.2 Définition des Contraintes (Exemple de Clauses SAT)

**Exemples de contraintes :**

- Le rover commence en `(2, 2)` : `At(r, l22, 0)`.
- Le rover ne peut être qu’à un seul endroit à la fois : `¬At(r,l1,t) ∨ ¬At(r,l2,t)`.
- Si le rover est en `(l11)` à `t`, et bouge en `(l12)`, il est en `(l12)` à `t+1` : `At(r,l11,t) ∧ Move(r, l11, l12,t) → At(r,l12,t+1)`.
- Si l’échantillon est en `(4,1)`, alors si le rover va sur `(4,1)`, il le ramasse : `At(r,l41,t) → has-sample(r,s,t+1)`.
- Le rover doit finir en `(4,4)` et avoir l’échantillon : `At(r,l44,t) ∧ has-sample(r,s,t)`.

## Adaptation à Madagascar

Nous devons traduire ce problème en un format que Madagascar comprend :

- **État initial** : Position du rover, énergie disponible.
- **État final** : Position du rover de retour à la base avec tous les échantillons collectés.
- **Actions possibles** : Se déplacer dans les 4 directions (si possible), ramasser un échantillon.

**Contraintes :**

- Ne pas dépasser l’énergie disponible.
- Ne pas aller sur des cases bloquées (cratères).
- Passer par les bonnes cases pour collecter les échantillons.
- Posséder assez d’énergie selon le poids de l’échantillon à ramasser.

## Construction et Mise en Œuvre du Plan

1. Définir la grille (ex. 5x5 avec obstacles, zones de charge et échantillons).
2. Définir les actions sous forme SAT (ex. déplacement, collecte, recharge).
3. Créer une instance du problème pour Madagascar.
4. Lancer Madagascar et récupérer la solution.
5. Analyser le plan généré et visualiser les déplacements du rover.

## Pourquoi ce Projet est un Bon Choix ?

- **C’est faisable** : La structure est claire et reste dans le cadre de la planification SAT.
- **C’est intéressant** : Ça a des applications réelles (rovers sur Mars).
- **Ça apprend bien Madagascar** : Avec contraintes simples et actions limitées.
- **On peut le rendre plus ou moins complexe selon le niveau d’aisance**.

## Choix des Paramètres

Madagascar propose trois configurations de solveurs SAT : `M`, `Mp`, et `MpC`. Ces solveurs se différencient principalement par leur heuristique et leur gestion de l’horizon de planification.

### 7.1 Caractéristiques des Trois Solveurs

- **M (Madagascar - Standard)** : Utilise l'heuristique VSIDS, explore les longueurs de planification sous la forme `5^i`.
- **Mp (Madagascar avec heuristique de planification spécifique)** : Remplace VSIDS par une heuristique optimisée basée sur une recherche en arrière.
- **MpC (Madagascar avec horizon avancé)** : Conserve l'heuristique de recherche en arrière et modifie l'exploration des horizons pour favoriser les plans longs.

### Choix du Solveur pour Notre Problème

Notre problème ayant une taille modérée et une mémoire limitée, l’utilisation de MpC n’est pas idéale. Les solveurs M et Mp sont donc les plus adaptés.

### Comparaison des Solveurs Madagascar sur Notre Instance de Planification

| Solveur | Nombre d'étapes du plan | Actions dans le plan | Mémoire utilisée (GB) | Nombre max de clauses apprises | Décisions totales | Conflits totaux |
|---------|-------------------------|----------------------|-----------------------|--------------------------------|-------------------|-----------------|
| M       | 30                      | 35                   | 1.120                 | 314                            | 1899              | 331             |
| Mp      | 25                      | 32                   | 0.687                 | 15                             | 39                | 33              |
| MpC     | 28                      | 34                   | 0.746                 | 35                             | 74                | 63              |

### Analyse des Performances

- **Qualité du plan produit** : Mp produit le plan le plus court.
- **Consommation mémoire** : Mp est le plus économe en mémoire.
- **Efficacité de la recherche** : Mp converge plus rapidement et utilise moins de décisions et de conflits.

Mp est le solveur le plus adapté à notre problème.

## Conclusion

Ce projet met en œuvre un problème de planification classique en intelligence artificielle, en utilisant Madagascar pour modéliser et résoudre le déplacement d’un rover explorateur spatial. Cette approche illustre parfaitement l’application des solveurs SAT aux problèmes de planification et permet de mieux comprendre les défis liés à l’exploration autonome et à la gestion des ressources dans des environnements inconnus. En intégrant ces concepts, nous ouvrons la voie à des avancées plus poussées dans le domaine de l’intelligence artificielle appliquée à la robotique et à l’exploration spatiale.
