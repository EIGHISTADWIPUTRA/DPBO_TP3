#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>
using namespace std;

class CPU : public Komponen
{
private:
    string nama_seri;
    int generasi;
    int jumlah_core;

public:
    CPU() {}

    CPU(string nama_seri, int generasi, int jumlah_core, string nama, string merk, int tahun_rilis, int harga) : Komponen(nama, merk, tahun_rilis, harga)
    {
        this->nama_seri = nama_seri;
        this->generasi = generasi;
        this->jumlah_core = jumlah_core;
    }

    void setNamaSeri(string nama_seri)
    {
        this->nama_seri = nama_seri;
    }

    void setGenerasi(int generasi)
    {
        this->generasi = generasi;
    }

    void setJumlahCore(int jumlah_core)
    {
        this->jumlah_core = jumlah_core;
    }

    string getNamaSeri()
    {
        return nama_seri;
    }

    int getGenerasi()
    {
        return generasi;
    }

    int getJumlahCore()
    {
        return jumlah_core;
    }

    ~CPU() {}
};