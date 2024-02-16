// How passing functions as a parameter work in Java
interface Function {
    int f(int x, int y);
}

public class LambdaExample3 {

    public static int evaluate(Function thing,
                               int x, int y) {
        return thing.f(x,y);
    }

    public static void main(String[] args) {
        System.out.println(evaluate(new Function() {
                                   public int f(int x, int y) {
                                       return x + y;
                                   }}, 3, 5));

        System.out.println(evaluate(new MultiplyingThing(),
                                    3, 5));
    }
}
