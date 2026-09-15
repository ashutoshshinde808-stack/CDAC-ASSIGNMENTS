public static class Complex {
    int real;
    int imag;

    Complex(int real, int imag) {
        this.real = real;
        this.imag = imag;

    }


    void sum(Complex c) {
        int r = this.real + c.real;
        int i = this.imag + c.imag;
        System.out.println("Addition = " + r + " + " + i + "i");
    }

    void subtract(Complex c) {
        int r = this.real - c.real;
        int i = this.imag - c.imag;
        System.out.println("Difference = " + r + " + " + i + "i");
    }

    void multiply(Complex c) {
        int r = (this.real * c.real) - (this.imag * c.imag);
        int i = (this.real * c.imag) + (this.imag * c.real);
        System.out.println("Product = " + r + " + " + i + "i");
    }
}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first real no.:");
        int r1 = sc.nextInt();

        System.out.println("Enter first imaginary no.:");
        int i1 = sc.nextInt();

        System.out.println("Enter second real no.:");
        int r2 = sc.nextInt();

        System.out.println("Enter second imaginary no.:");
        int i2 = sc.nextInt();

        Complex c1 = new Complex(r1, i1);
        Complex c2 = new Complex(r2, i2);

        c1.sum(c2);
        c1.subtract(c2);
        c1.multiply(c2);
    }
