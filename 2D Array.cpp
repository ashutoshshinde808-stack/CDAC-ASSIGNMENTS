#include<iostream>
using namespace std;
int main(){
int R;
int C;

cout << "Enter No. of Rows:"<<endl;
cin >> R;

cout << "Enter No. of Cols:"<<endl;
cin >> C;

int** arr = new int*[R];

for(int i =0;i < R ;i++){
    arr[i]=new int[C];
}

for(int i =0;i < R ;i++){
    for(int j =0;j < C ;j++){
        cin >> arr[i][j];
    }
}

for(int i =0;i < R ;i++){
    for(int j =0;j < C ;j++){
        cout << arr[i][j] << " ";
    }
}

 cout << "\n===== TILE LEGEND =====" << endl;
    cout << "0 = Grass" << endl;
    cout << "1 = Water" << endl;
    cout << "2 = Mountain" << endl;
    cout << "3 = Forest" << endl;
    cout << "4 = Dungeon" << endl;

    int grass = 0;
    int water = 0;
    int mountain = 0;
    int forest = 0;
    int dungeon = 0;
 
      for(int i = 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            switch(arr[i][j])
            {
                case 0:
                    grass++;
                    break;

                case 1:
                    water++;
                    break;

                case 2:
                    mountain++;
                    break;

                case 3:
                    forest++;
                    break;

                case 4:
                    dungeon++;
                    break;
            }
        }
    }

 
    cout << "\n===== TILE COUNTS =====" << endl;
    cout << "Grass    : " << grass << endl;
    cout << "Water    : " << water << endl;
    cout << "Mountain : " << mountain << endl;
    cout << "Forest   : " << forest << endl;
    cout << "Dungeon  : " << dungeon << endl;

  
    for(int i = 0; i < R; i++)
    {
        delete[] arr[i];
    }

    
    delete[] arr;

    return 0;
};
