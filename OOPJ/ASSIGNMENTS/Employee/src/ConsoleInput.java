
import java.io.IOException;

public class ConsoleInput
{
    public static float getFloat()
    {
        return Float.parseFloat(getString());
    }

    public static int getInt()
    {

        return Integer.parseInt(getString());
    }

    public static String  getString()
    {
        byte arrayInput [] =new byte [100];
        try {
            int length = System.in.read(arrayInput);
            byte  [] arrFinal = new byte [length-2];
            System.arraycopy(arrayInput, 0, arrFinal, 0, length-2);
            String objString =  new String (arrFinal);
            return objString;

        }
        catch (IOException e)
        {
            e.printStackTrace();
        }

        return null;


    }
}