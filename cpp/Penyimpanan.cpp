#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>
using namespace std;

class Penyimpanan : public Komponen
{
private:
    string tipe_penyimpanan;
    int kapasitas;

public:
    Penyimpanan() {}

    Penyimpanan(string tipe_penyimpanan, int kapasitas, string nama, string merk, int tahun_rilis, int harga) : Komponen(nama, merk, tahun_rilis, harga)
    {
        this->tipe_penyimpanan = tipe_penyimpanan;
        this->kapasitas = kapasitas;
    }

    void setTipePenyimpanan(string tipe_penyimpanan)
    {
        this->tipe_penyimpanan = tipe_penyimpanan;
    }

    void setKapasitas(int kapasitas)
    {
        this->kapasitas = kapasitas;
    }

    string getTipePenyimpanan()
    {
        return tipe_penyimpanan;
    }

    int getKapasitas()
    {
        return kapasitas;
    }

    ~Penyimpanan() {}
};