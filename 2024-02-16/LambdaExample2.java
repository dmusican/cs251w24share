// How passing functions as a parameter work in Java
interface DoAThing {
    int f(int x, int y);
}

class AddingThing implements DoAThing {
    public int f(int x, int y) {
        return x + y;
    }
}


public class LambdaExample2 {

    public static int evaluate(f, int x, int y) {
        f(x,y);
    }

    public static void main(String[] args) {
        System.out.println(evaluate(+, 3, 5));
    }
}
