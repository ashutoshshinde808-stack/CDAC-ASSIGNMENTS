import java.util.Arrays;
import java.util.Comparator;

public class Lambda1 {
    public static void main(String[] args){
        String [] names = {"Amit","Sakshi","Rahul","Rohit","Pranav"};

        Comparator<String> sortedname =(s1,s2) -> s1.compareTo(s2);
        Arrays.sort(names,sortedname);
        for(String name:names)
            System.out.println(name);
    }
}
