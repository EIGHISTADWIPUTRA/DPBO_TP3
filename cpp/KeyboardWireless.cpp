#pragma once
#include "Keyboard.cpp"
#include <iostream>
#include <string>
using namespace std;

class KeyboardWireless : public Keyboard
{
private:
    int kapasitas_baterai;
    string tipe_koneksi;
    string range_koneksi;

public:
    KeyboardWireless() {}

    KeyboardWireless(int kapasitas_baterai, string tipe_koneksi, string range_koneksi, string nama, string tipe_keyboard, string ukuran, string warna, string tipe_keyboard_base) : Keyboard(nama, tipe_keyboard, ukuran, warna, tipe_keyboard_base)
    {
        this->kapasitas_baterai = kapasitas_baterai;
        this->tipe_koneksi = tipe_koneksi;
        this->range_koneksi = range_koneksi;
    }

    void setKapasitasBaterai(int kapasitas_baterai)
    {
        this->kapasitas_baterai = kapasitas_baterai;
    }

    void setTipeKoneksi(string tipe_koneksi)
    {
        this->tipe_koneksi = tipe_koneksi;
    }

    void setRangeKoneksi(string range_koneksi)
    {
        this->range_koneksi = range_koneksi;
    }

    int getKapasitasBaterai()
    {
        return kapasitas_baterai;
    }

    string getTipeKoneksi()
    {
        return tipe_koneksi;
    }

    string getRangeKoneksi()
    {
        return range_koneksi;
    }

    ~KeyboardWireless() {}
};