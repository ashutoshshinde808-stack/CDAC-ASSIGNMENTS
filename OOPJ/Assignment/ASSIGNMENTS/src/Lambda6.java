import java.util.function.Predicate;

public class Lambda6 {
    public static void main(String[] args) {
        Predicate<Integer> isPrime = num -> {
            if (num < 2)
                return false;

            for(int i=2;i< num;i++){
                if(num%2==0)
                    return false;
            }
            return true;
        };

        int number = 22;
        System.out.println("IsPrime:"+isPrime.test(number));
    }
}
