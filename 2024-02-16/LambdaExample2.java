// How passing functions as a parameter work in Java
public class LambdaExample2 {

    public static void evaluate(f, int x, int y) {
        f(x,y);
    }

    public static void main(String[] args) {
        System.out.println(evaluate(+, 3, 5));
    }
}
