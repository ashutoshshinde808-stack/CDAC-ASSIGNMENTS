public static class Employee {
    String name;
    int yearOfjoining;
    String address;
    int salary;

    Employee(String name, int yearOfjoining, int salary, String address) {
        this.name = name;
        this.yearOfjoining = yearOfjoining;
        this.salary = salary;
        this.address = address;
    }

    void display() {
        System.out.println(name + "\t\t" + yearOfjoining + "\t\t"
                + salary + "\t\t" + address);
    }
}

public static void main(String[] args) {

    Employee e1 = new Employee(
            "Robert", 1994, 50000, "64C- WallsStreat"
    );

    Employee e2 = new Employee(
            "Sam", 2000, 40000, "68-D- WallsStreat"
    );

    Employee e3 = new Employee(
            "John", 1999, 60000, "26B- WallsStreat"
    );

    System.out.println("Name\t\tYearOfjoining\tSalary\t\tAddress");

    e1.display();
    e2.display();
    e3.display();
}