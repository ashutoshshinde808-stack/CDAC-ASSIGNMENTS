import java.util.function.BinaryOperator;

public class Lambda2 {
    public static void main(String[] args){
        Integer[] numbers = {10,20,30,40,50};

        BinaryOperator<Integer>largest = (a,b)-> a>b ? a:b;
        BinaryOperator<Integer>smallest = (a,b) -> a<b ? a:b;

        int max = numbers[0];
        int min = numbers[0];


        for(int i=1; i < numbers.length;i++) {
            max = largest.apply(max, numbers[i]);

        }

        for(int i=1; i < numbers.length;i++) {
            min = smallest.apply(min, numbers[i]);

        }

        System.out.println("Max:"+max);
        System.out.println("Min:"+min);

        }
    }



