#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("rini");
    anak* varAnak3 = new anak("Dewi");

    varIbu->tambahanak(varanak1);
    varIbu->tambahanak(varanak2);
    varIbu2->tambahanak(varanak3);
    varIbu2->tambahanak(varanak1);

    varIbu->cetakanak();
    varibu2->cetakanak();

    delete varIbu;
    delete varIbu2;
    delete varIbu1;
    delete varIbu2;
    delete varIbu3;

    return 0;
}