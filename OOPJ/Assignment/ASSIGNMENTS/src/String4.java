public class String4 {
    public static void main(String[] args) {
        String str = "The quick brown fox jumps over the lazy dog.";
        for(char ch = 'a'; ch <= 'z'; ch++){
        for(int i = 0; i<str.length(); i++){
            if(str.charAt(i) == ch) {
                System.out.print(ch + " = " +i+ " ,");
                break;
            }
        }

        }
    }
}

