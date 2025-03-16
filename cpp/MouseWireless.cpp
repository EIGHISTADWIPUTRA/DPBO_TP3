#pragma once
#include "Mouse.cpp"
#include <iostream>
#include <string>
using namespace std;

class MouseWireless : public Mouse
{
private:
    int kapasitas_baterai;
    string daya_tahan_baterai;
    string tipe_koneksi;
    string range_koneksi;

public:
    MouseWireless() {}

    MouseWireless(int kapasitas_baterai, string daya_tahan_baterai, string tipe_koneksi, string range_koneksi, string nama, string bentuk_mouse, string DPI, string warna, int jumlah_tombol, string tipe_koneksi_mouse) : Mouse(nama, bentuk_mouse, DPI, warna, jumlah_tombol, tipe_koneksi_mouse)
    {
        this->kapasitas_baterai = kapasitas_baterai;
        this->daya_tahan_baterai = daya_tahan_baterai;
        this->tipe_koneksi = tipe_koneksi;
        this->range_koneksi = range_koneksi;
    }

    void setKapasitasBaterai(int kapasitas_baterai)
    {
        this->kapasitas_baterai = kapasitas_baterai;
    }

    void setDayaTahanBaterai(string daya_tahan_baterai)
    {
        this->daya_tahan_baterai = daya_tahan_baterai;
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

    string getDayaTahanBaterai()
    {
        return daya_tahan_baterai;
    }

    string getTipeKoneksi()
    {
        return tipe_koneksi;
    }

    string getRangeKoneksi()
    {
        return range_koneksi;
    }

    ~MouseWireless() {}
};