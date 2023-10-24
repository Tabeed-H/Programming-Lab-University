

import java.util.Scanner;

public class SpaceRemover {
    public static void main(String[] args) {
        Scanner ins = new Scanner(System.in);
        System.out.println("Enter String: ");
        String input = ins.nextLine();
        String moddel = input.replaceAll("\\s{2,3}"," ");
        System.out.println("Modified String: " + moddel);
        System.out.println("\n\nTabeed Hameed | CSE-20-07");
        ins.close();
    }
}
