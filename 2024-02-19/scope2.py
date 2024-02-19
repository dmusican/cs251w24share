x = 3

def fun1():
    x = 4
    global x
    print("fun1", x)

fun1()
print("Done", x)
