package CSE355C;

import java.util.Scanner;

public class Table {
    public static void main(String[] args) {
        Scanner ins = new Scanner(System.in);
        System.out.println("Enter Number: ");
        int number = ins.nextInt();

        for(int i = 1; i <= 10; i++)
            System.out.println(number + " * " + i + " = " + (number * i));
        
        System.out.println("Tabeed Hameed | CSE-20-07");

        ins.close();
    }
}
