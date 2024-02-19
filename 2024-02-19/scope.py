x = 3

def fun1():
    global x
    x = 4
    fun2()

def fun2():
    print(x)

fun1()
