#include<iostream>
using namespace std;

namespace Physics{
    double clamp(double val , double min , double max){
    if(val < min) return min ;
    if(val > max) return max ;
     return val;
    }
    double lerp(double a , double b , double t){
    return a + (b - a) * t ;
}
}

namespace GameMath{
   double clamp(int val , int min , int max){

   if(val < min) return min ;
   if(val > max) return max ;
   return val;
   }


   double lerp(double a , double b , double t){
   return a + (b - a) * t ;
}

}

int main(){
    
   cout << "Physics: " << Physics :: clamp(25.0, 27.6, 23.4)<<endl;
   cout << "Physics: " << Physics :: lerp(28.5, 27.8, 0.4) <<endl;
   
   cout << "GameMath: " << GameMath :: clamp(25.0, 22.6, 23.4)<<endl;
   cout << "GameMath: " << GameMath :: lerp(28.5, 27.8, 0.4)<<endl;
    return 0;
}