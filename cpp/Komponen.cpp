#pragma once
#include <iostream>
#include <string>
using namespace std;

class Komponen {
private:
    string nama;
    string merk;
    int tahun_rilis;
    int harga;

public:
    Komponen() {}
    
    Komponen(string nama, string merk, int tahun_rilis, int harga) {
        this->nama = nama;
        this->merk = merk;
        this->tahun_rilis = tahun_rilis;
        this->harga = harga;
    }
    
    void setNama(string nama) {
        this->nama = nama;
    }
    
    void setMerk(string merk) {
        this->merk = merk;
    }
    
    void setTahunRilis(int tahun_rilis) {
        this->tahun_rilis = tahun_rilis;
    }
    
    void setHarga(int harga) {
        this->harga = harga;
    }
    
    string getNama() {
        return nama;
    }
    
    string getMerk() {
        return merk;
    }
    
    int getTahunRilis() {
        return tahun_rilis;
    }
    
    int getHarga() {
        return harga;
    }
    
    ~Komponen() {}
};