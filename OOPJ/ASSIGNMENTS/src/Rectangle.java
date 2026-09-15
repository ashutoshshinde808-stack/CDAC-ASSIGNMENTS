public class Rectangle {
    int length;
    int breadth;

    Rectangle(int length,int breadth){
        this.length=length;
        this.breadth=breadth;
    }
    int area(){
       return length*breadth;
    }
    public static void main(String[] args){

        Rectangle r1 = new Rectangle(4,5);
        Rectangle r2 = new Rectangle(5,8);

        System.out.println("Area of R1:"+r1.area());
        System.out.println("Area of R2:"+r2.area());
    }
}
