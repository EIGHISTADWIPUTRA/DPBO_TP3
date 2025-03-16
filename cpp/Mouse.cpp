#pragma once
#include <iostream>
#include <string>
using namespace std;

class Mouse
{
private:
    string nama;
    string bentuk_mouse;
    string DPI;
    string warna;
    int jumlah_tombol;
    string tipe_koneksi;

public:
    Mouse() {}

    Mouse(string nama, string bentuk_mouse, string DPI, string warna, int jumlah_tombol, string tipe_koneksi)
    {
        this->nama = nama;
        this->bentuk_mouse = bentuk_mouse;
        this->DPI = DPI;
        this->warna = warna;
        this->jumlah_tombol = jumlah_tombol;
        this->tipe_koneksi = tipe_koneksi;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setBentukMouse(string bentuk_mouse)
    {
        this->bentuk_mouse = bentuk_mouse;
    }

    void setDPI(string DPI)
    {
        this->DPI = DPI;
    }

    void setWarna(string warna)
    {
        this->warna = warna;
    }

    void setJumlahTombol(int jumlah_tombol)
    {
        this->jumlah_tombol = jumlah_tombol;
    }

    void setTipeKoneksi(string tipe_koneksi)
    {
        this->tipe_koneksi = tipe_koneksi;
    }

    string getNama()
    {
        return nama;
    }

    string getBentukMouse()
    {
        return bentuk_mouse;
    }

    string getDPI()
    {
        return DPI;
    }

    string getWarna()
    {
        return warna;
    }

    int getJumlahTombol()
    {
        return jumlah_tombol;
    }

    string getTipeKoneksi()
    {
        return tipe_koneksi;
    }

    ~Mouse() {}
};