public static class Employee2 {
    int salary;
    int hours;

    void getInfo(int salary,int hours){
        this.salary=salary;
        this.hours=hours;
    }
    void addSal(){
        if(salary<500)
            salary=salary+10;
    }
    void addWork(){
        if(hours>6)
            salary=salary+5;
    }

    void displaySalary(){
        System.out.println("Final Salary=$"+ salary);
    }
}
public static void main(String[] args){

    Employee2 e =new Employee2();

    e.getInfo(550,8);
    e.addSal();
    e.addWork();
    e.displaySalary();
}
