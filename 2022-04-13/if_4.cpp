//nested if 
//percabangan bersarang
//if didalam if

#include <iostream>
using namespace std;
int main()
{
    int nilai = 10;
    if (nilai % 2 == 0) {
        cout<<"Bilangan Genap";
        if (nilai <10) {
            cout<<"Bilangan genap kurang dari 10"<<endl;
        }
        else {
            cout<<"bilangan genap lebih dari 10"<<endl;
        }
    }
    else {
        cout<<"Bilangan Ganjil";
        if (nilai <10) {
            cout<<"Bilangan ganjil kurang dari 10"<<endl;
        }
        else {
            cout<<"bilangan ganjil lebih dari 10"<<endl;
        }
    }
    return 0;
}
