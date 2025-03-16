#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>
using namespace std;

class GPU : public Komponen
{
private:
    string nama_seri;
    int jumlah_memori;
    string tipe_memori;

public:
    GPU() {}

    GPU(string nama_seri, int jumlah_memori, string tipe_memori, string nama, string merk, int tahun_rilis, int harga) : Komponen(nama, merk, tahun_rilis, harga)
    {
        this->nama_seri = nama_seri;
        this->jumlah_memori = jumlah_memori;
        this->tipe_memori = tipe_memori;
    }

    void setNamaSeri(string nama_seri)
    {
        this->nama_seri = nama_seri;
    }

    void setJumlahMemori(int jumlah_memori)
    {
        this->jumlah_memori = jumlah_memori;
    }

    void setTipeMemori(string tipe_memori)
    {
        this->tipe_memori = tipe_memori;
    }

    string getNamaSeri()
    {
        return nama_seri;
    }

    int getJumlahMemori()
    {
        return jumlah_memori;
    }

    string getTipeMemori()
    {
        return tipe_memori;
    }

    ~GPU() {}
};