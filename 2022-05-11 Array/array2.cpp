#include <iostream>

using namespace std;
int main(){
    int angka[3][4]  = {
        {1, 2, 4 , 5 },
        {3, 4, 5 , 6 },
        {5, 6, 4 , 4 },
        
    }; 
    for (int i=0; i<3; i ++){
        for (int j=0; j<4; j++){
            cout<<angka[i][j]<<"  ";
        }
        cout<<" "<<endl;
    }
    
    
    
    return 0;
}
