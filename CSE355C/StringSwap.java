// package CSE355C;

public class StringSwap {
    public static void main(String[] args) {
        String a = "Grass";
        String b = "Hopper";

        System.out.println("Before Swapping: ");
        System.out.println("String 1: " + a);
        System.out.println("String 2: " + b);

        a = a + b;
        b = a.substring(0, (a.length() - b.length()));
        a = a.substring(b.length());
        System.out.println(" ");
        System.out.println("After Swapping: ");
        System.out.println("String 1: " + a);
        System.out.println("String 2: " + b);
    }
}
