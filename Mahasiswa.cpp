#include <iostream>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
    float nilai;
public:
    void input() {
        cout << "Masukan NIM :";
        cin >> nim;
        cout << "Masukan Nama :";
        cin >> nama;
        cout << "Masukan Nilai :";
        cin >> nilai;
    }
    void printData();
};

void Mahasiswa::printData() {
    cout << "\nData Mahasiswa";
    cout << "n\NIM : " << nim;
    cout << "n\Namanya : " << nama;
    cout << "\nnilai : " << nilai;
}
class mataKuliah {
private:
    string kode;
    string namaMK;
    int sks;
public:
    void inputMK() {
        cout << "\n\nMasukan kode matakuliah : ";
        cin >> kode;
        cout << "Masukan nama matakuliah lain : ";
        cin >> namaMK;
        cout << "masukan sks :";
        cin >> sks;
    }
    void tampil() {
        cout << "\nData Matakuliah";
        cout << "\nkode matakuliah : " << kode;
        cout << "\nNama matakuliah : " << namaMK;
        cout << "\nsks : " << sks;
    }
};

int main()
{
    Mahasiswa mhs;
    mataKuliah mk;
    
    mhs.input();
    mhs.printData();

    mk.inputMK();
    mk.tampil();
}

