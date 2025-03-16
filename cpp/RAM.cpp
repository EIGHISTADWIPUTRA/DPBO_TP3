#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>
using namespace std;

class RAM : public Komponen
{
private:
    string tipe_RAM;
    int kapasitas;

public:
    RAM() {}

    RAM(string tipe_RAM, int kapasitas, string nama, string merk, int tahun_rilis, int harga) : Komponen(nama, merk, tahun_rilis, harga)
    {
        this->tipe_RAM = tipe_RAM;
        this->kapasitas = kapasitas;
    }

    void setTipeRAM(string tipe_RAM)
    {
        this->tipe_RAM = tipe_RAM;
    }

    void setKapasitas(int kapasitas)
    {
        this->kapasitas = kapasitas;
    }

    string getTipeRAM()
    {
        return tipe_RAM;
    }

    int getKapasitas()
    {
        return kapasitas;
    }

    ~RAM() {}
};