def foo(x):
    x[0] = 6
    # unequivocal easy proof that this is not
    # pass by reference
    x = [92]

def main():
   a = [5]
   print(a)
   foo(a)
   print(a)

main()
