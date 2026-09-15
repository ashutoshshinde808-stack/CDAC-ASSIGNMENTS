import java.util.LinkedList;
import java.util.List;
class Entry
{

    public static void main(String [] args)
    {

        ConsoleInput consoleInput = new ConsoleInput();

        String name ="";
        String Adress ="";
        int age =0;
        boolean gender = true;
        double salary =0;
        boolean exit = true;

        int numOfEmpToAdd =0;

        List<Employee> list = new LinkedList<>();


        while(exit)
        {

            System.out.println("======= Employeee Management System ======= \n"
                    + " 1.Add Employee \n 2.Display details \n 3.Delete  \n 4.sort \n 5.save \n 6.Load \n 7.Exit"  );

            int  choice = consoleInput.getInt();


            System.out.println("Enter a Choice...");

            switch(choice)
            {
                case 1:	{
                    System.out.println(" 1.Manager \n 2.Engineer \n 3.sales Person \n 4.Exit");

                    int  choice2 = consoleInput.getInt();

                    switch(choice2)
                    {

                        case 1:
                        { 	System.out.println("Enter Number of employees to add : ");
                            numOfEmpToAdd =consoleInput.getInt();

//								        Manager man [] = new Manager[100];
                            for(int i = 1 ; i<=numOfEmpToAdd;i++)
                            {


                                System.out.println("Enter  employee Name : ");
                                name = consoleInput.getString();

                                System.out.println("Enter  employee Address : ");
                                Adress = consoleInput.getString();

                                System.out.println("Enter  employee Salary : ");
                                salary = consoleInput.getFloat();




                                list.add(new Manager( name ,  Adress ,  age ,  gender , salary ));
                            }
                            System.out.println("######## Employee Added SuccessFully.. ######### ");

                            break;
                        }

                        case 2:
                        {

                            Engineer en [] = new Engineer[100];


                            System.out.println("Enter Number of employees to add : ");
                            numOfEmpToAdd =consoleInput.getInt();

                            System.out.println("Enter  employee Name : ");
                            name = consoleInput.getString();

                            System.out.println("Enter  employee Address : ");
                            Adress = consoleInput.getString();

                            System.out.println("Enter  employee Salary : ");
                            salary = consoleInput.getFloat();

                            for(int i = 0 ; i<numOfEmpToAdd;i++)
                            {


                                en [i]= new Engineer ( name ,  Adress ,  age ,  gender , salary );
                            }

                            System.out.println("######## Employee Added SuccessFully.. ######### ");
                            break;
                        }

                        case 3 :
                        {

                            SalesPer sl [] = new SalesPer[100];

                            System.out.println("Enter Number of employees to add : ");
                            numOfEmpToAdd =consoleInput.getInt();

                            System.out.println("Enter  employee Name : ");
                            name = consoleInput.getString();

                            System.out.println("Enter  employee Address : ");
                            Adress = consoleInput.getString();

                            System.out.println("Enter  employee Salary : ");
                            salary = consoleInput.getFloat();

                            for(int i = 0 ; i<numOfEmpToAdd;i++)
                            {


                                sl [i]= new SalesPer ( name ,  Adress ,  age ,  gender , salary );
                            }
                            System.out.println("######## Employee Added SuccessFully.. ######### ");

                            break;

                        }

                        case 4 :
                        {

                            break;
                        }
                    }
                }
                break;


                case 2:
                {
                    for (Employee emp : list) {
                        System.out.println(emp.name +" - " + emp.age + " - " +emp.salary +" - " + emp.Adress);
                    }

                    break ;
                }

                case 3:
                {



                    break;
                }


                case 4:
                {


                    break;
                }
                case 5:

                {


                    break;
                }

                case 6:
                {


                    break;
                }

                case 7:
                {

                    System.out.println(" \n \n------ Closing Program... ------");

                    exit = false;
                }



            }
        }



    }


}