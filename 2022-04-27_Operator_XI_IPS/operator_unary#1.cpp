#include <iostream>
using namespace std;

int main(){
    //Operator Unary
    int a = 10;
    a = a++; //post - increment, menambahkan 1 nilai kedalam var
    //var a akan ditampilkan baru ditambahkan kemudian.


    int b = 10;
    b = ++b; //pre - increment, menambahkan 1 nilai kedalam var
    //var b 1+ 10 langsung ditampilkan 

    //decrement
    int c = 10;
    c = c--; //post - decrement

    int d = 10;
    d = --d; //pre - decrement



    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;


    return 0;
}
