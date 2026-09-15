import java.awt.geom.Area;

static class Triangle {
     int side1=3;
     int side2=4;
     int side3=5;

    void calculate(){
         //Perimeter
        double perimeter = side1+side2+side3;

        System.out.println("Perimeter:"+perimeter);
        //Area

        double s = perimeter/2.0;

        double area = Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));

        System.out.println("Area:"+area);

    }

}
public static void main(String[] args){

    Triangle t = new Triangle();

    t.calculate();


}
