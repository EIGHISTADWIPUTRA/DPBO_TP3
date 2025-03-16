#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Motherboard.cpp"
#include "CPU.cpp"
#include "GPU.cpp"
#include "RAM.cpp"
#include "Penyimpanan.cpp"
using namespace std;

class Komputer
{
private:
    string nama;
    Motherboard motherboard;
    CPU cpu;
    vector<RAM> listRAM;
    GPU gpu;
    Penyimpanan penyimpanan;
    int total_harga;

public:
    Komputer() {}

    Komputer(string nama, Motherboard motherboard, CPU cpu, vector<RAM> listRAM, GPU gpu, Penyimpanan penyimpanan)
    {
        this->nama = nama;
        this->motherboard = motherboard;
        this->cpu = cpu;
        this->listRAM = listRAM;
        this->gpu = gpu;
        this->penyimpanan = penyimpanan;

        // Menghitung total harga komponen
        this->total_harga = motherboard.getHarga() + cpu.getHarga() + gpu.getHarga() + penyimpanan.getHarga();
        for (RAM ram : listRAM)
        {
            this->total_harga += ram.getHarga();
        }
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setMotherboard(Motherboard motherboard)
    {
        this->motherboard = motherboard;
        updateTotalHarga();
    }

    void setCPU(CPU cpu)
    {
        this->cpu = cpu;
        updateTotalHarga();
    }

    void setListRAM(vector<RAM> listRAM)
    {
        this->listRAM = listRAM;
        updateTotalHarga();
    }

    void setGPU(GPU gpu)
    {
        this->gpu = gpu;
        updateTotalHarga();
    }

    void setPenyimpanan(Penyimpanan penyimpanan)
    {
        this->penyimpanan = penyimpanan;
        updateTotalHarga();
    }

    void addRAM(RAM ram)
    {
        this->listRAM.push_back(ram);
        this->total_harga += ram.getHarga();
    }

    string getNama()
    {
        return nama;
    }

    Motherboard getMotherboard()
    {
        return motherboard;
    }

    CPU getCPU()
    {
        return cpu;
    }

    vector<RAM> getListRAM()
    {
        return listRAM;
    }

    GPU getGPU()
    {
        return gpu;
    }

    Penyimpanan getPenyimpanan()
    {
        return penyimpanan;
    }

    int getTotalHarga()
    {
        return total_harga;
    }

    void updateTotalHarga()
    {
        this->total_harga = motherboard.getHarga() + cpu.getHarga() + gpu.getHarga() + penyimpanan.getHarga();
        for (RAM ram : listRAM)
        {
            this->total_harga += ram.getHarga();
        }
    }

    ~Komputer() {}
};