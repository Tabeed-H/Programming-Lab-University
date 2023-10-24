import java.io.*;

public class WriteFile {
    public static void main(String[] args) {
        try{
            FileWriter f = new FileWriter("First.txt");
            f.write("Store File into in First.txt");
            f.close();
            System.out.println("File Written!");
        }catch(IOException e){
            System.out.println("Error Writting to File");
            e.toString();
        }
    }
}
