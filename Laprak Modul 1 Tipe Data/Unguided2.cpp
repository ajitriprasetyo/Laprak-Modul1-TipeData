#include <iostream>
using namespace std;
// Definisi struct untuk merepresentasikan data mahasiswa
struct Mahasiswa {
    string name;
    int age;
};
// Definisi class untuk merepresentasikan sebuah mobil
class Mobil {
private:
    string merek;
    int tahunProduksi;
public:
    // Konstruktor untuk membuat objek Mobil
    Mobil(string merek, int tahunProduksi) {
        this->merek = merek;
        this->tahunProduksi = tahunProduksi;
    }
    // Metode untuk menampilkan informasi mobil
    void tampilkanInfo() {
        cout << "Merek mobil: " << merek << endl;
        cout << "Tahun produksi: " << tahunProduksi << endl;
    }
};
int main() {
    // Menggunakan struct Mahasiswa
    Mahasiswa mhs;
    mhs.name = "Tanto";
    mhs.age = 22;
    cout << "Nama mahasiswa: " << mhs.name << endl;
    cout << "Umur mahasiswa: " << mhs.age << endl;
    // Menggunakan class Mobil
    Mobil mobil("Honda Brio", 2021);
    mobil.tampilkanInfo();

    return 0;
}
