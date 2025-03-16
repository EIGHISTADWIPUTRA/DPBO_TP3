#pragma once
#include <iostream>
#include <string>
using namespace std;

class Keyboard
{
private:
    string nama;
    string tipe_keyboard;
    string ukuran;
    string warna;
    string tipe_koneksi;

public:
    Keyboard() {}

    Keyboard(string nama, string tipe_keyboard, string ukuran, string warna, string tipe_koneksi)
    {
        this->nama = nama;
        this->tipe_keyboard = tipe_keyboard;
        this->ukuran = ukuran;
        this->warna = warna;
        this->tipe_koneksi = tipe_koneksi;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setTipeKeyboard(string tipe_keyboard)
    {
        this->tipe_keyboard = tipe_keyboard;
    }

    void setUkuran(string ukuran)
    {
        this->ukuran = ukuran;
    }

    void setWarna(string warna)
    {
        this->warna = warna;
    }

    void setTipeKoneksi(string tipe_koneksi)
    {
        this->tipe_koneksi = tipe_koneksi;
    }

    string getNama()
    {
        return nama;
    }

    string getTipeKeyboard()
    {
        return tipe_keyboard;
    }

    string getUkuran()
    {
        return ukuran;
    }

    string getWarna()
    {
        return warna;
    }

    string getTipeKoneksi()
    {
        return tipe_koneksi;
    }

    ~Keyboard() {}
};