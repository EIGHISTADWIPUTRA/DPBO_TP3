#pragma once
#include "Mouse.cpp"
#include <iostream>
#include <string>
using namespace std;

class MouseKabel : public Mouse
{
private:
    string panjang_kabel;
    string tipe_USB;

public:
    MouseKabel() {}

    MouseKabel(string panjang_kabel, string tipe_USB, string nama, string bentuk_mouse, string DPI, string warna, int jumlah_tombol, string tipe_koneksi) : Mouse(nama, bentuk_mouse, DPI, warna, jumlah_tombol, tipe_koneksi)
    {
        this->panjang_kabel = panjang_kabel;
        this->tipe_USB = tipe_USB;
    }

    void setPanjangKabel(string panjang_kabel)
    {
        this->panjang_kabel = panjang_kabel;
    }

    void setTipeUSB(string tipe_USB)
    {
        this->tipe_USB = tipe_USB;
    }

    string getPanjangKabel()
    {
        return panjang_kabel;
    }

    string getTipeUSB()
    {
        return tipe_USB;
    }

    ~MouseKabel() {}
};