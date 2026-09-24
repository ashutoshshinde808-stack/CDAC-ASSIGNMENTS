import java.util.function.Supplier;

public class Lambda3 {
    public static void main(String[] args){
        Supplier<Integer> randomNumbers = () -> (int)(Math.random()*900)+100;
        System.out.println("3 Digit Number:"+randomNumbers.get());

    }
}
