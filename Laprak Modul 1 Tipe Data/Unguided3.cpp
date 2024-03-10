#include <iostream>
#include <map>
using namespace std;
int main() {
    // Membuat objek map dengan key bertipe string dan value bertipe int
    map<string, int> umur;
    // Menambahkan elemen ke dalam map
    umur["Raka"] = 19;
    umur["Aji"] = 22;
    umur["Titan"] = 20;
    // Mengakses nilai dari map menggunakan key
    cout << "Umur Raka  : " << umur["Raka"] << endl;
    cout << "Umur Aji   : " << umur["Aji"] << endl;
    cout << "Umur Titan : " << umur["Titan"] << endl;

    return 0;
}
