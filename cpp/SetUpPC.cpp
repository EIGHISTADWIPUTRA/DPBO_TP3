#pragma once
#include <iostream>
#include <string>
#include "Komputer.cpp"
#include "Monitor.cpp"
#include "Keyboard.cpp"
#include "KeyboardWireless.cpp"
#include "KeyboardKabel.cpp"
#include "Mouse.cpp"
#include "MouseWireless.cpp"
#include "MouseKabel.cpp"
using namespace std;

class SetUpPC
{
private:
    string nama;
    Komputer komputer;
    Monitor list_monitor;
    Keyboard keyboard;
    Mouse mouse;
    int total_harga;

public:
    SetUpPC() {}

    SetUpPC(string nama, Komputer komputer, Monitor list_monitor, Keyboard keyboard, Mouse mouse)
    {
        this->nama = nama;
        this->komputer = komputer;
        this->list_monitor = list_monitor;
        this->keyboard = keyboard;
        this->mouse = mouse;

        // Menghitung total harga komponen
        this->total_harga = komputer.getTotalHarga();
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setKomputer(Komputer komputer)
    {
        this->komputer = komputer;
        updateTotalHarga();
    }

    void setListMonitor(Monitor list_monitor)
    {
        this->list_monitor = list_monitor;
        updateTotalHarga();
    }

    void setKeyboard(Keyboard keyboard)
    {
        this->keyboard = keyboard;
        updateTotalHarga();
    }

    void setMouse(Mouse mouse)
    {
        this->mouse = mouse;
        updateTotalHarga();
    }

    string getNama()
    {
        return nama;
    }

    Komputer getKomputer()
    {
        return komputer;
    }

    Monitor getListMonitor()
    {
        return list_monitor;
    }

    Keyboard getKeyboard()
    {
        return keyboard;
    }

    Mouse getMouse()
    {
        return mouse;
    }

    int getTotalHarga()
    {
        return total_harga;
    }

    void updateTotalHarga()
    {
        this->total_harga = komputer.getTotalHarga();
    }

    void displayInfo()
    {
        cout << "=== Informasi Setup PC ===" << endl;
        cout << "Nama Setup: " << this->nama << endl;

        cout << "\n=== Informasi Komputer ===" << endl;
        cout << "Nama Komputer: " << komputer.getNama() << endl;

        cout << "\n--- Motherboard ---" << endl;
        cout << "Nama: " << komputer.getMotherboard().getNama() << endl;
        cout << "Merk: " << komputer.getMotherboard().getMerk() << endl;
        cout << "Jumlah Slot RAM: " << komputer.getMotherboard().getJumlahSlotRAM() << endl;
        cout << "Jumlah Slot Penyimpanan: " << komputer.getMotherboard().getJumlahSlotPenyimpanan() << endl;
        cout << "Tahun Rilis: " << komputer.getMotherboard().getTahunRilis() << endl;
        cout << "Harga: Rp" << komputer.getMotherboard().getHarga() << endl;

        cout << "\n--- CPU ---" << endl;
        cout << "Nama: " << komputer.getCPU().getNama() << endl;
        cout << "Merk: " << komputer.getCPU().getMerk() << endl;
        cout << "Seri: " << komputer.getCPU().getNamaSeri() << endl;
        cout << "Generasi: " << komputer.getCPU().getGenerasi() << endl;
        cout << "Jumlah Core: " << komputer.getCPU().getJumlahCore() << endl;
        cout << "Tahun Rilis: " << komputer.getCPU().getTahunRilis() << endl;
        cout << "Harga: Rp" << komputer.getCPU().getHarga() << endl;

        cout << "\n--- GPU ---" << endl;
        cout << "Nama: " << komputer.getGPU().getNama() << endl;
        cout << "Merk: " << komputer.getGPU().getMerk() << endl;
        cout << "Seri: " << komputer.getGPU().getNamaSeri() << endl;
        cout << "Jumlah Memori: " << komputer.getGPU().getJumlahMemori() << " GB" << endl;
        cout << "Tipe Memori: " << komputer.getGPU().getTipeMemori() << endl;
        cout << "Tahun Rilis: " << komputer.getGPU().getTahunRilis() << endl;
        cout << "Harga: Rp" << komputer.getGPU().getHarga() << endl;

        cout << "\n--- RAM ---" << endl;
        int i = 1;
        for (RAM ram : komputer.getListRAM())
        {
            cout << "RAM " << i << ":" << endl;
            cout << "  Nama: " << ram.getNama() << endl;
            cout << "  Merk: " << ram.getMerk() << endl;
            cout << "  Tipe: " << ram.getTipeRAM() << endl;
            cout << "  Kapasitas: " << ram.getKapasitas() << " GB" << endl;
            cout << "  Tahun Rilis: " << ram.getTahunRilis() << endl;
            cout << "  Harga: Rp" << ram.getHarga() << endl;
            i++;
        }

        cout << "\n--- Penyimpanan ---" << endl;
        cout << "Nama: " << komputer.getPenyimpanan().getNama() << endl;
        cout << "Merk: " << komputer.getPenyimpanan().getMerk() << endl;
        cout << "Tipe: " << komputer.getPenyimpanan().getTipePenyimpanan() << endl;
        cout << "Kapasitas: " << komputer.getPenyimpanan().getKapasitas() << " GB" << endl;
        cout << "Tahun Rilis: " << komputer.getPenyimpanan().getTahunRilis() << endl;
        cout << "Harga: Rp" << komputer.getPenyimpanan().getHarga() << endl;

        cout << "\n=== Informasi Monitor ===" << endl;
        cout << "Nama: " << list_monitor.getNama() << endl;
        cout << "Ukuran Layar: " << list_monitor.getUkuranLayar() << endl;
        cout << "Aspek Rasio: " << list_monitor.getAspekRasio() << endl;
        cout << "Resolusi: " << list_monitor.getResolusi() << endl;
        cout << "Tipe Panel: " << list_monitor.getTipePanel() << endl;
        cout << "Refresh Rate: " << list_monitor.getRefreshRate() << " Hz" << endl;

        cout << "\n=== Informasi Keyboard ===" << endl;
        cout << "Nama: " << keyboard.getNama() << endl;
        cout << "Tipe: " << keyboard.getTipeKeyboard() << endl;
        cout << "Ukuran: " << keyboard.getUkuran() << endl;
        cout << "Warna: " << keyboard.getWarna() << endl;
        cout << "Tipe Koneksi: " << keyboard.getTipeKoneksi() << endl;

        cout << "\n=== Informasi Mouse ===" << endl;
        cout << "Nama: " << mouse.getNama() << endl;
        cout << "Bentuk: " << mouse.getBentukMouse() << endl;
        cout << "DPI: " << mouse.getDPI() << endl;
        cout << "Warna: " << mouse.getWarna() << endl;
        cout << "Jumlah Tombol: " << mouse.getJumlahTombol() << endl;
        cout << "Tipe Koneksi: " << mouse.getTipeKoneksi() << endl;

        cout << "\n=== Total Harga Setup ===" << endl;
        cout << "Total Harga: Rp" << this->total_harga << endl;
    }

    ~SetUpPC() {}
};