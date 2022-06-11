#ifndef __MATA_KULIAH_HPP__
#define __MATA_KULIAH_HPP__

#include <iostream>

class matakuliah {
private:
    std::string id;
    std::string nama;
    std::string kode;
    int sks;

public:
    matakuliah(std::string id, std::string nama, std::string kode, int sks);

    std::string getId();
    std::string getNama();
    std::string getKode();
    int getSKS();

};

#endif 
