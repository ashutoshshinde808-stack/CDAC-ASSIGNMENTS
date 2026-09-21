public class Shapes {

    // Shape class
    static class Shape {

        public void printShape() {
            System.out.println("This is shape");
        }
    }


    // Rectangle class inherits Shape
    static class Rectangle extends Shape {

        public void printRectangle() {
            System.out.println("This is rectangular shape");
        }
    }


    // Circle class inherits Shape
    static class Circle extends Shape {

        public void printCircle() {
            System.out.println("This is circular shape");
        }
    }


    // Square class inherits Rectangle
    static class Square extends Rectangle {

        public void printSquare() {
            System.out.println("Square is a rectangle");
        }
    }


    // Main method
    public static void main(String[] args) {

        Square square = new Square();
        
        square.printShape();
        square.printRectangle();
        square.printSquare();
    }
}