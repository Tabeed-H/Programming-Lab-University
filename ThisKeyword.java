class ABC{
    int a, b;
    void set(int a, int b){
        this.a = a;
        this.b = b;
    }
    void display(){
        System.out.println("A: " + a + "\nB: " + b);
    }
}

public class ThisKeyword {
    public static void main(String[] args) {
        ABC obj  = new ABC();
        obj.set(10, 30);
        obj.display();
    }
}
