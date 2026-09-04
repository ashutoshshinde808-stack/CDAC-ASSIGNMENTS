#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Employee{



private:

    int empId;
    string name;
    string department;
    char grade;
    double basicSalary;
    bool isActive;

    static int employeeCount;

public:

    // Constructor
    Employee()
    {
    	empId = 1001 + employeeCount;
    	employeeCount++;

        name = "";
        department = "";
        grade = 'D';
        basicSalary = 0;
        isActive = true;
    }

    //Setters Functions

    void setName(const string& n )
    {



    	if (n.empty())
    	        {
    	            cout << "ERROR: Name cannot be empty." << endl;
    	            return;
    	        }

    	        name = n;

    }

    void setDepartment(const string& dept)
    {

    	if (dept == "Engineering" ||
    	            dept == "HR" ||
    	            dept == "Finance" ||
    	            dept == "Operations")
    	        {
    	            department = dept;
    	        }
    	        else
    	        {
    	            cout << "ERROR: '" << dept
    	                 << "' is not a registered department." << endl;
    	        }
    }

    void setGrade(char g)
       {
           if (g == 'A' || g == 'B' ||
               g == 'C' || g == 'D')
           {
               grade = g;
           }
           else
           {
               cout << "ERROR: Invalid grade '" << g
                    << "'. Accepted values: A, B, C, D."
                    << endl;
           }
       }


    void  setBasicSalary(double salary )
    {

    	if (salary > 10000 && salary < 500000)
    	        {
    	            basicSalary = salary;
    	        }
    	        else
    	        {
    	            cout << "ERROR: Salary must be between Rs.10,000 "
    	                 << "and Rs.5,00,000. Value rejected."
    	                 << endl;
    	        }
    }

    void deactivate()
        {
            isActive = false;
        }


    //Getters Functions

    int getEmpId() const
    {
    	return empId;
    }

    string getName() const
    {
    	return name;
    }

    string getDepartment() const
    {


    	return department;
    }

    char getGrade() const
    {
    	return grade;
    }

    double getBasicSalary() const
    {

    	return basicSalary;
    }

    bool getIsActive() const
    {
    	return isActive ;
    }







    // ####################### Bussiness logic   ###################################



    double computeGrossSalary( ) const
        {


    	    return basicSalary + computeAllowances();



        }

    double computeAllowances( ) const
    {
    	  if(grade == 'A')
    	  {


    		  return (basicSalary/100)*40;
    	  }
    	  else if( grade == 'B')
    	  {
    		  return (basicSalary/100)*30;
    	  }
    	  else if(grade == 'C')
    	 {
    		  return (basicSalary/100)*20;
    	 }
    	  else if(grade =='D')
    	{
    		  return (basicSalary/100)*10;
    	}


    	  	  return 0;

    }




    double computeTax() const
    {
    	double gsal =computeGrossSalary();
    	if (gsal <= 50000)
    	    {
    	        return 0;
    	    }
    	    else if (gsal <= 100000)
    	    {
    	        return (gsal - 50000) * 0.10;
    	    }
    	    else
    	    {
    	        return 5000 + (gsal - 100000) * 0.20;
    	    }
    }


    double computeNetSalary() const
    {
    	return computeGrossSalary() - computeTax();

    }

    void printPayslip() const
    {
    	    cout << "============================================" << endl;
    	    cout << "EMPLOYEE PAYSLIP - AUG 2026" << endl;
    	    cout << "============================================" << endl;

    	    cout << "Emp ID      : " << empId << endl;
    	    cout << "Name        : " << name << endl;
    	    cout << "Department  : " << department << endl;
    	    cout << "Grade       : " << grade << endl;

    	    cout << "Status      : "
    	         << (isActive ? "Active" : "Inactive")
    	         << endl;

    	    cout << "--------------------------------------------" << endl;

    	    cout << "Basic Salary     : Rs. "
    	         << basicSalary << endl;

    	    cout << "Allowances       : Rs. "
    	         << computeAllowances() << endl;

    	    cout << "Gross Salary     : Rs. "
    	         << computeGrossSalary() << endl;

    	    cout << "--------------------------------------------" << endl;

    	    cout << "Tax Deduction    : Rs. "
    	         << computeTax() << endl;

    	    cout << "Net Salary       : Rs. "
    	         << computeNetSalary() << endl;

    	    cout << "============================================" << endl;



    }


    void acceptDetails()
    {
        string name;
        string department;
        char grade;
        double salary;

        cout << "Enter name: ";
        cin >>  name;

        cout << "Enter department: ";
        cin >>  department;

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter basic salary: ";
        cin >> salary;

        setName(name);
        setDepartment(department);
        setGrade(grade);
        setBasicSalary(salary);
    }



    //static member function

    		static int getEmployeeCount()
    		{

    				return employeeCount;
    		}


};

			int Employee :: employeeCount =0;



int main()
{

	Employee e1;

	    Employee* e2 = new Employee();
	    Employee* e3 = new Employee();


	    e1.acceptDetails();
	    e2->acceptDetails();
	    e3->acceptDetails();


	    // These are PRIVATE, so they cause compiler errors:
	    // e1.empId = 999;
	    // e1.basicSalary = -1000;


	    e1.printPayslip();
	    e2->printPayslip();
	    e3->printPayslip();


	    e3->deactivate();

	    if (!e3->getIsActive())
	    {
	        cout << e3->getName()
	             << " is no longer active. Payroll skipped."
	             << endl;
	    }


	    cout << "Total Employees : "
	         << Employee:: getEmployeeCount()
	         << endl;


	    delete e2;
	    delete e3;

	    return 0;
	}






