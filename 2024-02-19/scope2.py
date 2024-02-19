x = 3

def fun1():
    x = 4
    global x
    x = 5
    print("fun1", x)

fun1()
print("Done", x)
