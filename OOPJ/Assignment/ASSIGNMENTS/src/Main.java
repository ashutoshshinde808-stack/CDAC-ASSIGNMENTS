public class Main {

    // Rectangle class
    static class Rectangle_2 {

        private float length;
        private float breadth;

        // Parameterized constructor
        public Rectangle_2(float length, float breadth) {
            this.length = length;
            this.breadth = breadth;
        }

        // Area
        public void printArea() {
            float area = length * breadth;
            System.out.println("Area      : " + area);
        }

        // Perimeter
        public void printPerimeter() {
            float perimeter = 2 * (length + breadth);
            System.out.println("Perimeter : " + perimeter);
        }
    }


    // Square inherits Rectangle_2
    static class Square extends Rectangle_2 {

        public Square(float side) {
            super(side, side);
        }
    }


    // Main method
    public static void main(String[] args) {

        // Rectangle
        System.out.println("===== RECTANGLE =====");

        System.out.print("Enter length: ");
        float length = ConsoleInput.getFloat();

        System.out.print("Enter breadth: ");
        float breadth = ConsoleInput.getFloat();

        Rectangle_2 rectangle_2 = new Rectangle_2(length, breadth);

        rectangle_2.printArea();
        rectangle_2.printPerimeter();


        // Square
        System.out.println("\n===== SQUARE =====");

        System.out.print("Enter side: ");
        float side = ConsoleInput.getFloat();

        Square square = new Square(side);

        square.printArea();
        square.printPerimeter();
    }
}