#include <iostream>
using namespace std;


int main() {

	int code;
	double reading;
	double temp;
	cout << "Enter a Reading : " << endl;
	cin >> reading;

	if(reading < 0){
		code = -1 ;
	}
	else if(reading >= 0 && reading <= 29){
		code = 0 ;

	}
	else if(reading >= 30 && reading <= 44){
		code = 1 ;

		}
	else if(reading >= 45 && reading <= 59){
		code = 2 ;

		}
	else{

		code = 3 ;
	}

	cout<<"Temperature : " << reading << "°C /" ;

	temp = reading * 9 / 5 + 32;
	cout<< temp << "°F" << endl;



	switch (code){

	case -1 :
		cout<<"ACTION :   Sensor fault — check wiring"<< endl;
		cout<<"STATUS :   Sensor - Error"<< endl;
		break;

	case 0 :
		cout<<"ACTION:    No action required"<<endl;
		cout<<"STATUS :   Normal"<< endl;
		break;

	case 1 :
		cout<<"ACTION:    Alert sent to supervisor"<<endl;
		cout<<"STATUS :   Warning"<< endl;
		break;

	case 2 :
			cout<<"ACTION:   Cooling system triggered"<<endl;
			cout<<"STATUS :   Critical"<< endl;
			break;

	case 3 :
			cout<<"ACTION:   Emergency shutdown initiated" <<endl;
			cout<<"STATUS :   SHUTDOWN"<< endl;
			break;

	}

	cout<<(reading > 25 ? "Reading:  Above Average" : " Below Average ")<<endl;

	return 0;
}
