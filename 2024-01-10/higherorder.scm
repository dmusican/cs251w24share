;;; map
;;; used to run a function on every item in a list
(define addOne
  (lambda (x)
    (+ x 1)))

(map addOne '(1 2 3 4 5))

(map (lambda (x) (+ x 1)) '(1 2 3 4 5))

;;; Common task
;;; Add 1 to every item in the list
;;; sum up all the results
;;; second part is the "reduce"
;;; In Scheme, reduce <---> fold

(use-modules ((rnrs)
              #:select (fold-left fold-right)))
