#include <iostream>
using namespace std;

int main(){
    /*
    Jika nilai >= 90   lulus sangat  memuaskan
    Jika nilai >= 80   lulus memuaskan
    Jika nilai >= 75   cukup
    tidak boleh > 100
    tidak boleh < 0
    < 75 tidak lulus
    */
   int nilai;
   cout<<"Masukkan Nilai = "; cin>>nilai;
   if (nilai >100 || nilai <0){
       cout<<"Diluar jangkauan";
   }
   else if (nilai >= 90) {
       cout<<"Lulus sangat memuaskan";
   }
   else if (nilai >= 80) {
       cout<<"Lulus memuaskan";
   }
   else if (nilai >= 75){
       cout<<"Cukup";
   }
   else {
       cout<<"tidak lulus";
   }



   return 0;
}//end of main function