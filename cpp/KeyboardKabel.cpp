#pragma once
#include "Keyboard.cpp"
#include <iostream>
#include <string>
using namespace std;

class KeyboardKabel : public Keyboard
{
private:
    string panjang_kabel;
    string tipe_USB;

public:
    KeyboardKabel() {}

    KeyboardKabel(string panjang_kabel, string tipe_USB, string nama, string tipe_keyboard, string ukuran, string warna, string tipe_koneksi) : Keyboard(nama, tipe_keyboard, ukuran, warna, tipe_koneksi)
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

    ~KeyboardKabel() {}
};