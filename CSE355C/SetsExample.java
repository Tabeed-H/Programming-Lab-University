import java.util.*;

public class SetsExample {
    public static void main(String[] args) {
        Set <String> fruits = new HashSet <> ();
        fruits.add("Apple");
        fruits.add("Peach");
        fruits.add("Peach");
        fruits.add("Plum");
        fruits.add("Apple");
        System.out.println(fruits);
    }
}
