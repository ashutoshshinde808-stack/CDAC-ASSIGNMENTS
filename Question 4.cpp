#include<iostream>
using namespace std;
 
void resetSensorPairV1(int reading1, int reading2){
      int temp = reading1;
      reading1 = reading2;
      reading2 = temp;
}

void resetSensorPairV2(int& reading1, int& reading2){
      int temp = reading1;
      reading1 = reading2;
      reading2 = temp;
}

void resetSensorPairV3(int* reading1, int* reading2){
      int temp = *reading1;
      *reading1 = *reading2;
     *reading2 = temp;
}

int main(){
    int  reading1 = 23;
    int reading2 = 15;

    cout << " V1 - Call by Value " << endl;
    cout << " Before : " << " reading1: " << reading1 <<  " reading2: " <<reading2 << endl;
    resetSensorPairV1(reading1 ,reading2);
   cout << " After : " <<  " reading1: "  << reading1 <<  " reading2: " << reading2 << endl;


    cout << " V1 - Call by Reference " << endl;
    cout << " Before : " << " reading1: " << reading1 <<  " reading2: " <<reading2 << endl;
    resetSensorPairV2(reading1 ,reading2);
    cout << " After : " <<  " reading1: "  << reading1 <<  " reading2: " << reading2 << endl;


    cout << " V1 - Call by Pointer " << endl;
   cout << " Before : " << " reading1: " << reading1 <<  " reading2: " <<reading2 << endl;
    resetSensorPairV3(&reading1 , &reading2);
    cout << " After : " <<  " reading1: "  << reading1 <<  " reading2: " << reading2 << endl;
}