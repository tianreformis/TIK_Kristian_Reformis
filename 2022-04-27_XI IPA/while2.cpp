#include <iostream>

using namespace std;
int main(){

    //menambahkan batas bawah
    //menambahkan batas atas
    //namun batas bawah tidak boleh lebih dari batas atas
    int  batasbawah, batasatas;
    cout<<"Masukkan Batas Bawah = ";cin>>batasbawah;    
    cout<<"Masukkan Batas Atas = ";cin>>batasatas;

    if (batasbawah < batasatas){
        while (batasbawah++ <batasatas){ 
        cout<<"Data ke - "<<batasbawah<<endl;
        }
    }
    else {
        cout<<"Batas Bawah tidak boleh lebih dari batasatas";
    }
    
    return 0;
}

