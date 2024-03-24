#include <iostream>
using namespace std;

int main (){
    int num, indeks;
     cout << "Jumlah angka yang akan diinput: ";
     cin  >> num;
     int arr[num];

     cout << "Input "<< num << " angka! "<< endl;

     for(indeks =0; indeks < num; indeks ++){
        cout << "Data " << indeks +1 << " : ";
        cin  >> arr[indeks];
     }
     cout << "Data: ";
     for (indeks = 0; indeks < num; indeks ++){
        cout << arr[indeks] << " ";
     }
     cout << endl;

     cout << "Nomor genap: ";
     for (indeks = 0; indeks < num; indeks ++) {
        if (indeks % 2 == 0){
            cout << arr[indeks] << ", ";
        }
     }
     cout << endl; 
     cout << "Nomor ganjil: ";
     for (indeks = 0; indeks < num; indeks ++) {
        if (indeks % 2 != 0){
            cout << arr[indeks] << ", ";
        }
     }return 0;
}