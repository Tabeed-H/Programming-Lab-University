

class CustomException extends Exception{
    public CustomException(String s){
        super(s);
    }
}


public class ThrowsExample {
     static void checkAge(int a) throws CustomException {
        if( a < 18){
            throw new CustomException("Not Allowed");
        }else{
            System.out.println("Allowed");
        }
    }

    public static void main(String[] args) {
        try {
            checkAge(5);
        } catch (CustomException e) {
            e.printStackTrace();
        }
    }
}
