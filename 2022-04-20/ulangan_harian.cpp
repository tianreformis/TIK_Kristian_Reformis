#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int tugas, uas, uts;

    cout<<"Masukkan Nilai Tugas = ";cin>>tugas;
    if (tugas > 100){
        cout<<"Nilai tidak bisa melebihi 100,\n ulangi kembali program";
    }
    else {
        cout<<"Masukkan Nilai UTS = ";cin>>uts;
            if (uts > 100){
                cout<<"Nilai tidak bisa melebihi 100,\n ulangi kembali program";
                }
            else {
                cout<<"Masukkan Nilai uas = ";cin>>uas;
                    if (uas > 100){
                        cout<<"Nilai tidak bisa melebihi 100,\n ulangi kembali program";
                    }            
            }

    int akhir = (tugas * 0.3) + (uts *0.3) + (uas * 0.4);
    cout<<akhir;
        
    }
    return 0;
}



/*
Buatlah sebuah program sederhana untuk menghitung nilai akhir;
dengan ketentuan 
nilai akhir = 30% nilai tugas + 30% nilai uts + 40% nilai uas
jika salah satu nilai lebih dari 100 program,  
program akan langsung berhenti
dengan memberikan statamen tidak boleh lebih dari 100
*/