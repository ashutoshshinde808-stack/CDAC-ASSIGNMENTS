public class Members {

    private String Name;
    private int age;
    private String Phone;
    private String Address;
    private double salary;

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getPhone() {
        return Phone;
    }

    public void setPhone(String phone) {
        Phone = phone;
    }

    public String getAddress() {
        return Address;
    }

    public void setAddress(String address) {
        Address = address;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public void printSalary(){
        System.out.println("Salary:"+salary);
    }
}

class PrimeMembers extends Members{
    private int JoiningYear;
    private int JoiningFees;
    private boolean isActive;

    public int getJoiningYear() {
        return JoiningYear;
    }

    public void setJoiningYear(int joiningYear) {
        JoiningYear = joiningYear;
    }

    public int getJoiningFees() {
        return JoiningFees;
    }

    public void setJoiningFees(int joiningFees) {
        JoiningFees = joiningFees;
    }

    public boolean isActive() {
        return isActive;
    }

    public void setActive(boolean active) {
        isActive = active;
    }

    public void display(){
        System.out.println("Name:"+getName());
        System.out.println("Age:"+getAge());
        System.out.println("Address:"+getAddress());
        System.out.println("Phone:"+getPhone());
        System.out.println("Salary:"+getSalary());

        System.out.println("JoiningYear:"+getJoiningYear());
        System.out.println("Name:"+getJoiningFees());
        System.out.println("Is Active:"+isActive());

    }

    public static void main(String args[]){
        PrimeMembers pm = new PrimeMembers();

        System.out.println("Enter Name:");
        pm.setName(ConsoleInput.getString());

        System.out.println("Enter Age:");
        pm.setAge(ConsoleInput.getInt());

        System.out.println("Enter Phone:");
        pm.setPhone(ConsoleInput.getString());

        System.out.println("Enter Address:");
        pm.setAddress(ConsoleInput.getString());

        System.out.println("Enter Salary:");
        pm.setSalary(ConsoleInput.getFloat());

        System.out.println("Enter Joining Year:");
        pm.setJoiningYear(ConsoleInput.getInt());

        System.out.println("Enter Joining Fees:");
        pm.setJoiningFees(ConsoleInput.getInt());

        System.out.println("IsActive:");
        pm.setActive(Boolean.parseBoolean(ConsoleInput.getString()));

        pm.display();

        System.out.println("Calling PrintSalary:");
        pm.printSalary();
    }
}
