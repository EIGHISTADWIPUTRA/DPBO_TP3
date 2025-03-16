#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>
using namespace std;

class Motherboard : public Komponen
{
private:
    int jumlah_slot_RAM;
    int jumlah_slot_Penyimpanan;

public:
    Motherboard() {}

    Motherboard(int jumlah_slot_RAM, int jumlah_slot_Penyimpanan, string nama, string merk, int tahun_rilis, int harga) : Komponen(nama, merk, tahun_rilis, harga)
    {
        this->jumlah_slot_RAM = jumlah_slot_RAM;
        this->jumlah_slot_Penyimpanan = jumlah_slot_Penyimpanan;
    }

    void setJumlahSlotRAM(int jumlah_slot_RAM)
    {
        this->jumlah_slot_RAM = jumlah_slot_RAM;
    }

    void setJumlahSlotPenyimpanan(int jumlah_slot_Penyimpanan)
    {
        this->jumlah_slot_Penyimpanan = jumlah_slot_Penyimpanan;
    }

    int getJumlahSlotRAM()
    {
        return jumlah_slot_RAM;
    }

    int getJumlahSlotPenyimpanan()
    {
        return jumlah_slot_Penyimpanan;
    }

    ~Motherboard() {}
};