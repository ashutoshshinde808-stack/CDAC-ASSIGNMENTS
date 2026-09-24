import java.time.LocalDate;
import java.util.function.Supplier;

public class Lambda5 {
        public static void main(String[] args) {

            Supplier<LocalDate> currentDate = () -> LocalDate.now();

            System.out.println(currentDate.get());
        }
    }

