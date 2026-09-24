import java.util.function.Supplier;

public class Lambda8 {
    public static  void main(String[] args){
        Supplier<String> generateOTP = () ->{
            String vowels = "AEIOU";
            char firstChar = vowels.charAt((int)(Math.random()*5));
            int number = (int)(Math.random()*10000);
            return firstChar+ String.format("%04d",number);
        };

        System.out.println("OTP:"+generateOTP.get());
    }
}
