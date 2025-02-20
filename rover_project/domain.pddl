;; =============================================
;; domain.pddl - Définition des actions du rover
;; =============================================

(define (domain rover-explorer)
	(:requirements :strips :typing :negative-preconditions)
	(:types rover location sample base)
	
	(:predicates
		(at ?r - rover ?l - location)
		(fully-charged ?r - rover)
		(mid-battery?r - rover)
		(low-battery ?r - rover)
		(charging-station ?l - location)
		(base-at ?b - base ?l - location)
		(sample-at ?s - sample ?l - location)
		(has-sample ?r - rover ?s - sample)
		(light-sample ?s - sample)
		(heavy-sample ?s - sample)
		(carrying ?r - rover)
		(delivered ?s - sample)
		(adjacent ?l1 - location ?l2 - location)
		(crater ?l - location) ;; Zone infranchissable
	)

	;; Déplacement normal
	(:action move
		:parameters (?r - rover ?from - location ?to - location)
		:precondition (and 
			(at ?r ?from)
			(adjacent ?from ?to)
			(not (crater ?to)) ;; Empêche d'aller sur un cratère
		)
		:effect (and
			(not (at ?r ?from))
			(at ?r ?to)
		)
	)

	;; Recharge de la batterie
	(:action recharge-low-to-high
		:parameters (?r - rover ?l - location)
		:precondition (and 
			(at ?r ?l) 
			(charging-station ?l)
			(low-battery ?r)
		)
		:effect (and 
			(not (low-battery ?r))
			(fully-charged ?r)
		)
	)

	(:action recharge-mid-to-high
		:parameters (?r - rover ?l - location)
		:precondition (and 
			(at ?r ?l) 
			(charging-station ?l)
			(mid-battery ?r)
		)
		:effect (and 
			(not (mid-battery ?r))
			(fully-charged ?r)
		)
	)

	;; Ramassage d'un échantillon avec batterie pleine
	(:action collect-light-sample-fully-charged
		:parameters (?r - rover ?s - sample ?l - location)
		:precondition (and 
			(not (carrying ?r))
			(at ?r ?l) 
			(sample-at ?s ?l) 
			(light-sample ?s)  
			(fully-charged ?r))
		:effect (and 
			(not (sample-at ?s ?l)) 
			(not (fully-charged ?r))
			(mid-battery ?r)
			(carrying ?r) 
			(has-sample ?r ?s) 	
		)
	)

	;; Ramassage d'un échantillon avec batterie à mi-charge
	(:action collect-light-sample-half-charged
		:parameters (?r - rover ?s - sample ?l - location)
		:precondition (and 
			(not (carrying ?r))
			(at ?r ?l) 
			(sample-at ?s ?l) 
			(light-sample ?s)  
			(mid-battery ?r))
		:effect (and 
			(not (sample-at ?s ?l)) 
			(not (mid-battery ?r))
			(low-battery ?r)
			(carrying ?r) 
			(has-sample ?r ?s) 	
		)
	)

	;; Ramassage d'un échantillon lourd
	(:action collect-heavy-sample
		:parameters (?r - rover ?s - sample ?l - location)
		:precondition (and (at ?r ?l) (sample-at ?s ?l) (heavy-sample ?s) (not (carrying ?r)) (fully-charged ?r))
		:effect (and (not (sample-at ?s ?l)) (carrying ?r) (has-sample ?r ?s) (low-battery ?r) (not (fully-charged ?r))
		)
	)
	
	;; Dépôt d'un échantillon à la base
	(:action deliver-sample
		:parameters (?r - rover ?b - base ?l - location ?s - sample)
		:precondition (and (at ?r ?l) (base-at ?b ?l) (has-sample ?r ?s))
		:effect (and (not (has-sample ?r ?s)) (not (carrying ?r)) (delivered ?s))
	)	
)
