// How passing functions as a parameter work in Java
interface DoAThing {
    int f(int x, int y);
}

class AddingThing implements DoAThing {
    public int f(int x, int y) {
        return x + y;
    }
}

class MultiplyingThing implements DoAThing {
    public int f(int x, int y) {
        return x * y;
    }
}

public class LambdaExample3 {

    public static int evaluate(DoAThing thing,
                               int x, int y) {
        return thing.f(x,y);
    }

    public static void main(String[] args) {
        System.out.println(evaluate(new AddingThing(),
                                    3, 5));
        System.out.println(evaluate(new MultiplyingThing(),
                                    3, 5));
    }
}
