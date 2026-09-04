#include<iostream>
#include<cmath>
using namespace std;




double computeRMS(double* signal, int n){
    double sum = 0;
    double *ptr = signal;

    for(int i = 0 ; i < n ; i++){
        sum += (*ptr)*(*ptr);
        ptr++;
    }

    return sqrt(sum/n);
};
void normalise(double* signal, int n){ 
    double maxAbs = 0;
    double* ptr = signal;

   for (int i = 0; i < n; i++)
    {
        double current = abs(*ptr);

        if (current > maxAbs)
        {
            maxAbs = current;
        }

        ptr++;
    }

     ptr = signal;

    for (int i = 0; i < n; i++)
    {
        *ptr = *ptr / maxAbs;
        ptr++;
    }


};
int countZeroCrossings(double* signal, int n){
    int count = 0;
    double* ptr = signal;
    for(int i = 0; i < n -1; i++){

        if(*ptr < 0 && *(ptr + 1) || *ptr > 0 && *(ptr + 1)){
              count++;
        }
        ptr++;
    }

    return count;
};
void applyGain(double* signal, int n , double gainFactor){
    double* ptr = signal;
     for(int i = 0; i < n ; i++){

        *ptr = *ptr * gainFactor;
         ptr++;
     }
};



int main(){

double signal[] = {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};

int n = sizeof(signal)/sizeof(signal[0]);

double rms = computeRMS(signal, n);

cout << " RMS " << rms << endl;


normalise(signal , n);
    cout<<"After Normalisation"<<endl;

    for(int i = 0; i < n; i++){

        cout << signal[i] << "  " ;
    }

    int crossings = countZeroCrossings(signal, n);
    cout << "Zero Crossings = " << crossings << endl;

  applyGain(signal , n , 2.0);

  cout << "After Gain:" <<endl;

  for(int i = 0; i < n; i++){

        cout << signal[i] << "  " ;
    }




    return 0;
}