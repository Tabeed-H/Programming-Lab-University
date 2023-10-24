

import java.util.Scanner;

public class TemplateString {
    public static void main(String[] args) {
        Scanner ins = new Scanner(System.in);
        String nonModified = "Hello, <name>";
        System.out.println("The String Template is: " + nonModified);
        System.out.println("Enter Name: ");
        String input = ins.nextLine();
        System.out.println("Modified String: "+ nonModified.replace("<name>", input));
        System.out.println("\n\nTabeed Hameed | CSE-20-07");
    }
}
