public class loops {
    public static void main(String[] args)

        for (int i = 1; i < 1000; i++) {
            if (i % 2 != 0) {
                System.out.println("ODD NUMBERS:" + i);
            }
        }
    }


     Print Even from 1 to 500
    public static void main(String[] args) {
        for (int i = 1; i < 500; i++) {
            if (i % 2 == 0) {
                System.out.println("Even No.:" + i);
            }
        }

    }
}



 Print every 7 No. 1 to 200


    public static void main(String[] args) {
        for (int i = 1; i < 200; i++) {
            if (i % 7 == 0) {
                System.out.println("Multiple of 7:" + i);
            }
        }

    }
}



 Pattern-1
    public static void main(String[] args) {
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

    }

}


Pattern-2

    public static void main(String[] args) {
        for (int i = 5; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

    }
}


Pattern-3


public static void main(String[] args) {
    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            System.out.print(num + " ");
            num++;

        }
        System.out.println();
    }

}
}


Pattern-4

public static void main(String[] args){
   for(int i =1 ; i <=6 ; i++){
       for(int j=1 ;j <= i; j++){
           System.out.print(j);
       }
       System.out.println();
   }
}
}




Pattern-5

public static void main(String[] args){
    for(int i =6 ; i >=1 ; i--){
        for(int j=1 ;j <= i; j++){
            System.out.print(j);
        }
        System.out.println();
    }
}
}











