 static class Student{
        public String name;
        public String phone;
        public int roll_no;
        public String address;
    }

    public static void main(String[] args){
        Student obj1 = new Student();
        Student obj2 = new Student();
       obj1.name = "john";
       obj1.roll_no = 2;
       obj1.address="pune";
       obj1.phone="23146567";
       obj2.name = "Sam";
       obj2.roll_no = 4;
       obj2.address="mumbai";
       obj2.phone="23145687";

        System.out.println("Name:"+ obj1.name);
        System.out.println("Roll No.:"+ obj1.roll_no);
        System.out.println("Name:"+ obj1.address);
        System.out.println("Roll No.:"+ obj1.phone);
        System.out.println("Name:"+ obj2.name);
        System.out.println("Roll No.:"+ obj2.roll_no);
        System.out.println("Name:"+ obj2.address);
        System.out.println("Roll No.:"+ obj2.phone);
    }

