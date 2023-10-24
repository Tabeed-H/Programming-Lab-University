class CustomException extends Exception{
    public CustomException(String s){
        super(s);
    }
}

public class UserException {
    public static void main(String[] args) {
        try{
            throw new CustomException("Error Here");
        }catch(CustomException e){
            System.out.println("Custom Exception: " + e.getMessage());
        }
    }
}
