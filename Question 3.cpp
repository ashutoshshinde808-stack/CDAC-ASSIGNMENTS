#include<iostream>
using namespace std;

int main(){

    double temp[3][3];

    for(int floor=0 ; floor < 3 ; floor++){
        for(int room=0 ; room < 3 ; room++){
            
            cin >> temp [floor][room];
        }

               
    }

    cout << "       Room 1  Room 2  Room 3" << endl;

       for(int floor = 0 ; floor < 3 ; floor++){

         cout << " Floors " << floor + 1 << ":" ;
         
        for(int room = 0 ; room < 3 ; room++){

            cout << temp[floor][room] << "  " ;

        }

         

        cout << endl;
       }

       double maxTemp = temp[0][0];
       int hottestFloor = 0;
       int hottestRoom = 0 ;

       for(int floor = 0 ; floor < 3 ; floor++){
        for(int room = 0 ; room < 3 ; room++){
              if(temp[floor][room] > maxTemp){

                maxTemp = temp[floor][room];
                hottestFloor = floor;
                hottestRoom = room;
              }
        }
       }

       cout<<"Hottest Floor:" << hottestFloor + 1 << " , Room " << hottestRoom + 1 << " = " <<
         maxTemp << endl;

         double highestAvg = 0;
         int highestAvgFloor = 0;

for (int floor = 0; floor < 3; floor++) {

    double sum = 0;

    // Add temperatures of all 3 rooms on this floor
    for (int room = 0; room < 3; room++) {
        sum += temp[floor][room];
    }

    // Calculate average temperature of this floor
    double average = sum / 3;

    // Check if this is the highest average
    if (average > highestAvg) {
        highestAvg = average;
        highestAvgFloor = floor;
    }
}

    cout << "Floor with Highest Average Temperature: Floor "
     << highestAvgFloor + 1
     << " = " << highestAvg << endl;


    int warningCount = 0;

for (int floor = 0; floor < 3; floor++) {
    for (int room = 0; room < 3; room++) {

        if (temp[floor][room] >= 30) {
            warningCount++;
        }
    }
}

    cout << "Rooms at WARNING or above: "
     << warningCount << endl;
        
    return 0;
}
