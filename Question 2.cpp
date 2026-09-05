#include<iostream>
using namespace std;

class Patient{
private:

int patientId;
string name;
int age;
string ward;
const string bloodGroup;

public:
    Patient():patientId(0),name("Unknown"),age(0),ward("General"),bloodGroup("O+"){
          cout << "Default Constructor" << endl;
    }
      Patient(int id , const string& name): patientId(id), name(name), age(0) ,ward("General"),bloodGroup("O+"){
        cout << " Emergency Patient: "<<  this -> name << endl;
          
    }
    Patient(int id, const string& name, int age, const string& ward, const string& bg):patientId(id),name(name),age(age),ward(ward),bloodGroup(bg){
        cout << " Full Admission : " << this -> name << endl;;
    }

    ~Patient(){
        cout << " Patient: " << name << "Discharged" << endl;
    }

    void displayRecord() const{
        cout << " PatientID: " << patientId << endl;
        cout << " Patient Name: " << name << endl;
        cout << " Patient age: " << age << endl;
        cout << " Patient ward: " << ward << endl;
         cout << " Patient BG: " << bloodGroup << endl;
    }

    void transferWard(const string& newWard){
          ward = newWard;
    }

};

int main(){
    Patient p1;

    Patient p2( 1, "Ashutosh");

    Patient p3(101 , "Rahul" , 29 , "Cardiology" , "A+");

    p1.displayRecord();
    p2.displayRecord();
    p3.displayRecord();

    Patient* p = new Patient[4];

    for(int i=0;i<4;i++){
        cout << "Patient " << i+1 ;
        p[1].displayRecord();
    }

    p[1].transferWard("ICU");
    cout<<" After Transfer: " << endl;
    p[1].displayRecord();

    delete[] p;
}
