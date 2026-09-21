public static class Parent {
    void parentMethod(){
        System.out.println("This is Parent Class");
    }
}

static class Child extends Parent{
    void childMethod(){
        System.out.println("This is Child Class");
    }
}
public static void main(String[] args) {
    Parent p1 = new Parent();
    Child c1 = new Child();

    p1.parentMethod();
    c1.childMethod();
    c1.parentMethod();

}
