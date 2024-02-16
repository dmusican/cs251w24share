// How passing functions as a parameter work in Java
// interface Function {
//     int f(int x, int y);
// }

public class LambdaExample5 {

    public static int evaluate(Function thing,
                               int x, int y) {
        return thing.f(x,y);
    }

    public static void main(String[] args) {
        // Function add = (x,y) -> x + y;
        // System.out.println(evaluate(add, 3, 5));

        System.out.println(evaluate((x,y) -> x*y, 3, 5));
    }
}
