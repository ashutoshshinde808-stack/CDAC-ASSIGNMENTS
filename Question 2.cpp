#include <iostream>
using namespace std;

int main() {
	double arr[100] ;
	int N;
	cout<<"Enter Readings:"<<endl;
	cin >> N;
   // INPUT READINGS
	for(int i = 0 ; i < N ; i++){
		cin >> arr[i];

	}

	cout<<"Valid Readings: ";

	for(int i = 0 ; i < N ; i++){

		if(arr[i]<0){
			continue;  //Skips Values
		}

		cout << arr[i] << " ";
	}


	for(int i = 0 ; i < N ; i++){

			if(arr[i] >= 45){

			cout << " First Reading: Index  " << i << " -> " <<  arr[i]  << endl;
			break;
		}

	}

	double min , max , sum = 0;
	int valid =0 ;

	for(int i = 0 ; i < N ; i++){

		if(arr[i] < 0){

			continue;
		}

		if(valid == 0){
			min = arr[i];
			max = arr[i];
		}

		if(arr[i] < min){

			min = arr[i];
		}

		if(arr[i] > max){

			max = arr[i];
		}

		sum = sum + arr[i] ;

        valid++;

	}

	double avg = sum / valid ;

	cout << "Min:" << min << endl;
	cout << "Max:" << max << endl;
	cout << "Avg:" << avg << endl;



	int normal =0 , warning = 0 , critical = 0 , shutdown = 0;

	cout << " Categories: " << endl;
for(int i = 0 ; i < N ; i++){
	  if(arr[i]<20){
		normal++ ;
	}

	else if(arr[i] < 35){
			warning++ ;
		}

	else if(arr[i] < 60){
				critical++ ;
			}

    else{
			shutdown++ ;
			}

}

cout << "Normal: " << normal << endl;
cout << "Warning: " << warning << endl;
cout << "Critical: " << critical << endl;
cout << "Shutdown: " << shutdown << endl;
	return 0;
}
