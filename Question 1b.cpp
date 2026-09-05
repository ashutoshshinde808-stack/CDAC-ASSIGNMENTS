#include<iostream>
using namespace std;

double reorderCost(int qty, double unitPrice){
    return qty * unitPrice;
};           
double reorderCost(double qty, double unitPrice){
      return qty * unitPrice;
};        
double reorderCost(int qty, double unitPrice, double taxRate){
      double cost = qty * unitPrice;

      return cost = cost + (cost*taxRate/100);
};
double applyDiscount(double price, double discountPercent = 10.0){
      return price - (price*discountPercent/100);
};

int main(){
    cout<<" Integer Quantity : " 
    << reorderCost(10 , 55.5) <<endl;
    cout<<" Fractional Quantity : "
     << reorderCost(20 , 50.5) <<endl;
     cout<<" Tax  : "
     << reorderCost(30 , 23.5 , 15.5) <<endl;
    cout<<" Discount : " 
      << applyDiscount(65.5 , 45.2 ) <<endl;
    
}

