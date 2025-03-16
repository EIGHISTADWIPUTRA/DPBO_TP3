#pragma once
#include <iostream>
#include <string>
using namespace std;

class Monitor
{
private:
    string nama;
    string ukuran_layar;
    string aspek_rasio;
    string resolusi;
    string tipe_panel;
    int refresh_rate;

public:
    Monitor() {}

    Monitor(string nama, string ukuran_layar, string aspek_rasio, string resolusi, string tipe_panel, int refresh_rate)
    {
        this->nama = nama;
        this->ukuran_layar = ukuran_layar;
        this->aspek_rasio = aspek_rasio;
        this->resolusi = resolusi;
        this->tipe_panel = tipe_panel;
        this->refresh_rate = refresh_rate;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setUkuranLayar(string ukuran_layar)
    {
        this->ukuran_layar = ukuran_layar;
    }

    void setAspekRasio(string aspek_rasio)
    {
        this->aspek_rasio = aspek_rasio;
    }

    void setResolusi(string resolusi)
    {
        this->resolusi = resolusi;
    }

    void setTipePanel(string tipe_panel)
    {
        this->tipe_panel = tipe_panel;
    }

    void setRefreshRate(int refresh_rate)
    {
        this->refresh_rate = refresh_rate;
    }

    string getNama()
    {
        return nama;
    }

    string getUkuranLayar()
    {
        return ukuran_layar;
    }

    string getAspekRasio()
    {
        return aspek_rasio;
    }

    string getResolusi()
    {
        return resolusi;
    }

    string getTipePanel()
    {
        return tipe_panel;
    }

    int getRefreshRate()
    {
        return refresh_rate;
    }

    ~Monitor() {}
};