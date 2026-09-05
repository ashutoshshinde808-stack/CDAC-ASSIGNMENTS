#include<iostream>
using namespace std;
class Product{
private:
int productId;
string name;
double price;
int quantity;


public:
  void acceptDetails(){

    cout << "Enter Product_ID : " << endl;
    cin >> productId;

     cout << "Enter Name : " << endl;
    cin >> name;

     cout << "Enter Price : " << endl;
    cin >> price;

     cout << "Enter Quantity : " << endl;
    cin >> quantity;
  }

  void displayDetails() const{
    cout << productId << " " ;
    cout << name << " " ;
    cout << price << " " ;
    cout << quantity << " " ;
    cout << totalValue();
  }

  double totalValue() const{
    return price * quantity;
  }

  bool isLowStock(int threshold) const{
    return quantity < threshold;
  }
};

int main(){

    Product product[5];

    for(int i = 0 ; i < 5 ; i++){
         cout << " Enter Product Details: " << endl;
         product[i].acceptDetails();
    }

         cout << "\n===== ALL PRODUCTS =====\n";

      cout << "ID  Name  Price  Quantity  TotalValue ";
       for(int i = 0 ; i < 5 ; i++){
         cout << " Enter Product Details: " << endl;
         product[i].displayDetails();
    }

    int maxIndex=0;
     for(int i = 0 ; i < 5 ; i++){
        if(product[i].totalValue() > product[maxIndex].totalValue())
        maxIndex = i;
     }

      cout << "\n=== HIGHEST TOTAL VALUE ===\n";
    product[maxIndex].displayDetails();
   int threshold = 0;
   cout << " Enter stock threshold: ";
    cin >> threshold;

    cout << "\n=== LOW STOCK PRODUCTS ===\n";

    bool found = false;

    for (int i = 0; i < 5; i++) {

        if (product[i].isLowStock(threshold)) {
            product[i].displayDetails();
            found = true;
        }
    }

    if (!found) {
        cout << "No low stock products.\n";
    }


    return 0;

}