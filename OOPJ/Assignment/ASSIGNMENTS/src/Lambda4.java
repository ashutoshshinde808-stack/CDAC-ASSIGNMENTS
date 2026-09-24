import java.util.function.Function;
import java.util.Arrays;

public class Lambda4 {
    public static void main(String[] args) {

        int[] numbers = {10, 20, 30, 40, 50};

        Function<int[] , int[]> reverse = arr->{
             int[] result = new int[arr.length];

             for(int i=0; i< arr.length;i++){
                 result[i] = arr[ arr.length-1-i];
             }
             return result;
        };
        int[] reversed = reverse.apply(numbers);
        System.out.println(Arrays.toString(reversed));
    }

}