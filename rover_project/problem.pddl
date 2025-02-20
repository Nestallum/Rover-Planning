;; ==============================================
;; problem.pddl - Scénario d'exploration du rover
;; ==============================================

(define (problem rover-mission)
    (:domain rover-explorer)
    (:objects
        rover1 - rover
        base1 - base
        sample1 sample2 sample3 - sample
        crater1 crater2 - crater
        charging-station1 charging-station2 - location 
        l00 l01 l02 l03 l04
        l10 l11 l12 l13 l14
        l20 l21 l22 l23 l24
        l30 l31 l32 l33 l34
        l40 l41 l42 l43 l44 - location
    )
    (:init
        ;; Position initiale
        (at rover1 l22)
        (base-at base1 l44)
        (sample-at sample1 l41)
        (sample-at sample2 l30)
        (sample-at sample3 l02)
        (charging-station l40)
        (charging-station l24)

        ;; Poids des échantillons
        (light-sample sample1)
        (heavy-sample sample2)
        (light-sample sample3)

        ;; Cratères infranchissables
        (crater l13)
        (crater l31)

        ;; Batterie du rover
        (fully-charged rover1)
        
        ;; Relations d'adjacence bidirectionnelles
        (adjacent l00 l01) (adjacent l01 l00) (adjacent l01 l02) (adjacent l02 l01)
        (adjacent l02 l03) (adjacent l03 l02) (adjacent l03 l04) (adjacent l04 l03)
        (adjacent l10 l11) (adjacent l11 l10) (adjacent l11 l12) (adjacent l12 l11)
        (adjacent l12 l13) (adjacent l13 l12) (adjacent l13 l14) (adjacent l14 l13)
        (adjacent l20 l21) (adjacent l21 l20) (adjacent l21 l22) (adjacent l22 l21)
        (adjacent l22 l23) (adjacent l23 l22) (adjacent l23 l24) (adjacent l24 l23)
        (adjacent l30 l31) (adjacent l31 l30) (adjacent l31 l32) (adjacent l32 l31)
        (adjacent l32 l33) (adjacent l33 l32) (adjacent l33 l34) (adjacent l34 l33)
        (adjacent l40 l41) (adjacent l41 l40) (adjacent l41 l42) (adjacent l42 l41)
        (adjacent l42 l43) (adjacent l43 l42) (adjacent l43 l44) (adjacent l44 l43)
        (adjacent l00 l10) (adjacent l10 l00) (adjacent l10 l20) (adjacent l20 l10)
        (adjacent l20 l30) (adjacent l30 l20) (adjacent l30 l40) (adjacent l40 l30)
        (adjacent l01 l11) (adjacent l11 l01) (adjacent l11 l21) (adjacent l21 l11)
        (adjacent l21 l31) (adjacent l31 l21) (adjacent l31 l41) (adjacent l41 l31)
        (adjacent l02 l12) (adjacent l12 l02) (adjacent l12 l22) (adjacent l22 l12)
        (adjacent l22 l32) (adjacent l32 l22) (adjacent l32 l42) (adjacent l42 l32)
        (adjacent l03 l13) (adjacent l13 l03) (adjacent l13 l23) (adjacent l23 l13)
        (adjacent l23 l33) (adjacent l33 l23) (adjacent l33 l43) (adjacent l43 l33)
        (adjacent l04 l14) (adjacent l14 l04) (adjacent l14 l24) (adjacent l24 l14)
        (adjacent l24 l34) (adjacent l34 l24) (adjacent l34 l44) (adjacent l44 l34)
      
    )
    (:goal (and
        (delivered sample1)
        (delivered sample2)
        (delivered sample3)
        (at rover1 l44)
    ))
)
