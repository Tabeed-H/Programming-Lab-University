

import java.util.Scanner;

public class StringReverse {
    public static void main(String[] args) {
        Scanner ins = new Scanner(System.in);
        System.out.println("Input String: ");
        String input = ins.nextLine();
        String reverse = "";

        for(int i = input.length() -1; i >= 0; i--){
            char c = input.charAt(i);
            reverse += c;
        }

        System.out.println("String Reversed: " + reverse);
        System.out.println("\n\nTabeed Hameed | CSE-20-07");

        ins.close();
    }
}
