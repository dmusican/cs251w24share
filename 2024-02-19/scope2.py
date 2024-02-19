x = 3

def fun1():
    global x
    x = 4
    print("fun1", x)

fun1()
print("Done", x)
