#include <iostream>
#include <string>
using namespace std;
// nama repository = paradigmaoop1_4NIM belakang //
// minimal commit 15 //
class mahasiswa {
    private:
    const int id;
    string nama;
    float nilai;

    public:
    mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) { //Member // definisi
    }
}



~mahasiswa() {
    cout << "id  = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << "Nilai = " << nilai << endl;
} 