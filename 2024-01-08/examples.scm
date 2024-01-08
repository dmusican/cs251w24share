;;; test if a list of numbers
(define list-of-numbers?
  (lambda (lst)
    (if (null? lst)
	#t
	(and (number? (car lst))
	     (list-of-numbers? (cdr lst))))))

;;; (remove-first 2 '(9 2 3 2 5)) ---> (9 3 2 5)
(define remove-first
  (lambda (item lst)
    (cond ( (null? lst) lst )
	  ( (equal? item (car lst))  (cdr lst))
	  ( else
	    (cons (car lst)
		  (remove-first item (cdr lst)))))))

;;; (subst 'b 'a '((b c) (b () d))) ---> ((a c) (a () d))
;;; (subst 'b 'a 'b)    ---> a
(define subst
  (lambda (old new input)
    (cond ((null? input) input)
	  ((list? input)

	   (cons
	    (subst old new (car input))
	    (subst old new (cdr input)))

	  ((equal? old input) new)    ;;; not a list, and old
	  (else input))))))  ;;; not a list, not old












