#ifndef IBU_H
#define IBU_H

class ibu {
    public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama)  :nama(pNama) {
        cout << "ibu" \"" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "ibu" \ "ibu \"" << nama << "\" tidak ada\n";
    }
    void tambahanak(anak*);
    void cetakanak();
};
void ibu::tambahanak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}
void ibu::cetakanak() {
    cout << "daftar Anak dari Ibu \"" << this->nama << "\":
    for (auto& a : daftar_anak) {
        cout << a->nama << "\n";
    }
    cout << endl;
}
#endif
