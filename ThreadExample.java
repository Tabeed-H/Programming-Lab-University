class One extends Thread{
    public void run(){
        while(true){
            System.out.println("Thread 1");
        }
    }
}

class two extends Thread{
    public void run(){
        while(true){
            System.out.println("Thread 2");
        }
    }
}

public class ThreadExample {
    public static void main(String[] args) {
        One o = new One();
        two t = new two();
        o.start();
        t.start();
    }
}
