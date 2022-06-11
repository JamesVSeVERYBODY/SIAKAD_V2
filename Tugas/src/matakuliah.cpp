#include "include/matakuliah.hpp"

matakuliah::matakuliah(std::string id, std::string nama, std::string kode, int sks) 
    : id(id), nama(nama), kode(kode), sks(sks)
{
}

std::string matakuliah::getId(){
    return this->id;
}

std::string matakuliah::getNama(){
    return this->nama;
}

std::string matakuliah::getKode(){
    return this->kode;
}

int matakuliah::getSKS(){
    return this->sks;
}