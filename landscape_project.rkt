#lang racket
(require 2htdp/image)

; Definicja funkcji i zmiennych lokalnych
(define (landscape n color)
   (let ( [m (- n 1) ]
          [losowa_liczba  (random 200)])

; Pętla rekurencyjna do rysowania trójkątów o zmiennej wysokości o zadanym kolorze     
  (if (= n 1)
      (triangle losowa_liczba "solid" color)
      (beside/align "bottom" (landscape m color) (landscape m color)))))

; Rysowanie planszy w oparciu o wcześniejsze funkcje i definicje.
(define (num_of_triangles n)
  (above (overlay/align "center" "bottom"
                      (landscape n "black")
                      (landscape n "darkgrey")
                      (landscape n "grey")
                      (rectangle 1500 230 "solid" "cyan"))
       (rectangle 1500 25 "solid" "darkgreen")
       (rectangle 1500 25 "solid" "lightbrown")))

(num_of_triangles 4)

;