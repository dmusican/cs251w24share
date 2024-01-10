;;; normal way
;; (define mult
;;   (lambda (a b)
;;     (* a b)))

;;; curried version
(define mult
  (lambda (a)

    (lambda (b)
      (* a b))))
