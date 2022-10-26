#lang racket

(define sum2 (lambda (a b) (+ a b)))
(define (sum3 a b c) (+ a b c))

(define (suml L)
  (if(null? L)
     0
     (+
      (car L)
      (suml(cdr L))
      )
   ))

(define (nth l n)
  (
   if (zero? n)
      (car l)
      (
       nth
       (cdr l)
       (- n 1)
       )
   ))