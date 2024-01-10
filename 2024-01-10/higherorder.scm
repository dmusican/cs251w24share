;;; map
;;; used to run a function on every item in a list
(define addOne
  (lambda (x)
    (+ x 1)))

(map addOne '(1 2 3 4 5))
