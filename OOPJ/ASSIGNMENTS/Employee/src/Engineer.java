
public class Engineer extends Employee {






    Engineer (String name , String Adress , int age , boolean gender ,double salary)
    {
        super( name ,  Adress ,  age ,  gender , salary);



    }


    String  getManagerDetails()
    {

        return name +"-" + Adress +"-" + "-"+age + "-" + salary;


    }




}


