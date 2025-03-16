#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "SetUpPC.cpp"
#include "Komputer.cpp"
#include "Motherboard.cpp"
#include "CPU.cpp"
#include "GPU.cpp"
#include "RAM.cpp"
#include "Penyimpanan.cpp"
#include "Monitor.cpp"
#include "Keyboard.cpp"
#include "KeyboardWireless.cpp"
#include "KeyboardKabel.cpp"
#include "Mouse.cpp"
#include "MouseWireless.cpp"
#include "MouseKabel.cpp"
using namespace std;

// Fungsi untuk menampilkan garis tabel
void printLine(int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "-";
    }
    cout << endl;
}

int main()
{
    // Membuat komponen motherboard (3 data)
    Motherboard motherboard1(4, 2, "B550 Aorus Elite", "Gigabyte", 2021, 2500000);
    Motherboard motherboard2(4, 4, "ROG Strix Z590-E Gaming", "ASUS", 2022, 4200000);
    Motherboard motherboard3(2, 1, "A320M-K", "ASUS", 2020, 950000);
    vector<Motherboard> motherboards = {motherboard1, motherboard2, motherboard3};

    // Membuat komponen CPU (3 data)
    CPU cpu1("Ryzen 5", 5, 6, "Ryzen 5 5600X", "AMD", 2020, 3700000);
    CPU cpu2("Core i9", 12, 16, "Core i9-12900K", "Intel", 2022, 8500000);
    CPU cpu3("Ryzen 3", 3, 4, "Ryzen 3 3300X", "AMD", 2020, 1500000);
    vector<CPU> cpus = {cpu1, cpu2, cpu3};

    // Membuat komponen GPU (3 data)
    GPU gpu1("RTX 3060", 12, "GDDR6", "GeForce RTX 3060", "NVIDIA", 2021, 5500000);
    GPU gpu2("RTX 3080", 10, "GDDR6X", "GeForce RTX 3080", "NVIDIA", 2021, 12000000);
    GPU gpu3("RX 6600", 8, "GDDR6", "Radeon RX 6600", "AMD", 2021, 4500000);
    vector<GPU> gpus = {gpu1, gpu2, gpu3};

    // Membuat komponen RAM (3 data)
    RAM ram1("DDR4 3200MHz", 16, "Vengeance LPX", "Corsair", 2020, 900000);
    RAM ram2("DDR4 3600MHz", 8, "Trident Z RGB", "G.Skill", 2021, 850000);
    RAM ram3("DDR4 2666MHz", 8, "Fury", "Kingston", 2019, 600000);
    vector<RAM> rams = {ram1, ram2, ram3};

    // Membuat komponen Penyimpanan (3 data)
    Penyimpanan penyimpanan1("SSD", 1000, "970 EVO Plus", "Samsung", 2020, 1800000);
    Penyimpanan penyimpanan2("HDD", 2000, "Barracuda", "Seagate", 2019, 850000);
    Penyimpanan penyimpanan3("SSD", 500, "Blue SN550", "Western Digital", 2021, 900000);
    vector<Penyimpanan> penyimpanans = {penyimpanan1, penyimpanan2, penyimpanan3};

    // Membuat komponen Monitor (3 data)
    Monitor monitor1("Odyssey G5", "27 inch", "16:9", "2560x1440", "VA", 144);
    Monitor monitor2("UltraGear 27GL83A", "27 inch", "16:9", "2560x1440", "IPS", 165);
    Monitor monitor3("ProArt PA278QV", "27 inch", "16:9", "2560x1440", "IPS", 75);
    vector<Monitor> monitors = {monitor1, monitor2, monitor3};

    // Membuat komponen Keyboard Wireless (3 data)
    KeyboardWireless keyboardW1(1000, "Bluetooth", "10m", "Logitech G915", "Mechanical", "TKL", "Hitam", "Wireless");
    KeyboardWireless keyboardW2(1500, "2.4GHz", "12m", "Keychron K2", "Mechanical", "75%", "Abu-abu", "Wireless");
    KeyboardWireless keyboardW3(800, "Bluetooth", "8m", "MX Keys", "Membrane", "Full", "Hitam", "Wireless");
    vector<KeyboardWireless> keyboardWs = {keyboardW1, keyboardW2, keyboardW3};

    // Membuat komponen Keyboard Kabel (3 data)
    KeyboardKabel keyboardK1("1.8m", "USB-A", "Razer Huntsman Elite", "Mechanical", "Full", "Hitam", "Kabel");
    KeyboardKabel keyboardK2("2m", "USB-C", "Ducky One 2 Mini", "Mechanical", "60%", "Putih", "Kabel");
    KeyboardKabel keyboardK3("1.5m", "USB-A", "Logitech G Pro X", "Mechanical", "TKL", "Hitam", "Kabel");
    vector<KeyboardKabel> keyboardKs = {keyboardK1, keyboardK2, keyboardK3};

    // Membuat komponen Mouse Wireless (3 data)
    MouseWireless mouseW1(1000, "40 jam", "Bluetooth", "10m", "Logitech G S", "Simetris", "25600 DPI", "Putih", 5, "Wireless");
    MouseWireless mouseW2(750, "30 jam", "2.4GHz", "12m", "Razer Viper Ultimate", "Simetris", "20000 DPI", "Hitam", 8, "Wireless");
    MouseWireless mouseW3(600, "20 jam", "Bluetooth", "8m", "Logitech MX Master 3", "Ergonomis", "8000 DPI", "Abu-abu", 7, "Wireless");
    vector<MouseWireless> mouseWs = {mouseW1, mouseW2, mouseW3};

    // Membuat komponen Mouse Kabel (3 data)
    MouseKabel mouseK1("1.8m", "USB-A", "Logitech G502 Hero", "Ergonomis", "25600 DPI", "Hitam", 11, "Kabel");
    MouseKabel mouseK2("2m", "USB-C", "Razer DeathAdder V2", "Ergonomis", "20000 DPI", "Hitam", 8, "Kabel");
    MouseKabel mouseK3("1.5m", "USB-A", "SteelSeries Rival 3", "Simetris", "8500 DPI", "Hitam", 6, "Kabel");
    vector<MouseKabel> mouseKs = {mouseK1, mouseK2, mouseK3};

    // Membuat vector untuk RAM
    vector<RAM> ramList1 = {ram1, ram1};
    vector<RAM> ramList2 = {ram2, ram2, ram2, ram2};
    vector<RAM> ramList3 = {ram3, ram3};

    // Membuat komputer (3 data)
    Komputer komputer1("Gaming PC High-End", motherboard2, cpu2, ramList2, gpu2, penyimpanan1);
    Komputer komputer2("Gaming PC Mid-Range", motherboard1, cpu1, ramList1, gpu1, penyimpanan1);
    Komputer komputer3("PC Office", motherboard3, cpu3, ramList3, gpu3, penyimpanan3);
    vector<Komputer> komputers = {komputer1, komputer2, komputer3};

    // Membuat setup PC (3 data)
    SetUpPC setupPC1("Setup Gaming High-End", komputer1, monitor2, keyboardW1, mouseW2);
    SetUpPC setupPC2("Setup Gaming Mid-Range", komputer2, monitor1, keyboardK1, mouseK1);
    SetUpPC setupPC3("Setup Office", komputer3, monitor3, keyboardW3, mouseW3);
    vector<SetUpPC> setupPCs = {setupPC1, setupPC2, setupPC3};

    // Menampilkan informasi komponen dalam bentuk tabel dinamis
    cout << "========== INFORMASI KOMPONEN ==========\n"
         << endl;

    // Tabel Motherboard
    cout << "--- MOTHERBOARD ---" << endl;
    printLine(100);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Merk" << setw(15) << left << "Tahun Rilis"
         << setw(15) << left << "Slot RAM" << setw(15) << left << "Slot Storage"
         << setw(15) << left << "Harga" << endl;
    printLine(100);

    for (int i = 0; i < motherboards.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << motherboards[i].getNama()
             << setw(15) << left << motherboards[i].getMerk()
             << setw(15) << left << motherboards[i].getTahunRilis()
             << setw(15) << left << motherboards[i].getJumlahSlotRAM()
             << setw(15) << left << motherboards[i].getJumlahSlotPenyimpanan()
             << setw(15) << left << "Rp" + to_string(motherboards[i].getHarga()) << endl;
    }
    cout << endl;

    // Tabel CPU
    cout << "--- CPU ---" << endl;
    printLine(100);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Merk" << setw(15) << left << "Seri"
         << setw(15) << left << "Generasi" << setw(15) << left << "Jumlah Core"
         << setw(15) << left << "Harga" << endl;
    printLine(100);

    for (int i = 0; i < cpus.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << cpus[i].getNama()
             << setw(15) << left << cpus[i].getMerk()
             << setw(15) << left << cpus[i].getNamaSeri()
             << setw(15) << left << cpus[i].getGenerasi()
             << setw(15) << left << cpus[i].getJumlahCore()
             << setw(15) << left << "Rp" + to_string(cpus[i].getHarga()) << endl;
    }
    cout << endl;

    // Tabel GPU
    cout << "--- GPU ---" << endl;
    printLine(100);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Merk" << setw(15) << left << "Seri"
         << setw(15) << left << "Jumlah Memori" << setw(15) << left << "Tipe Memori"
         << setw(15) << left << "Harga" << endl;
    printLine(100);

    for (int i = 0; i < gpus.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << gpus[i].getNama()
             << setw(15) << left << gpus[i].getMerk()
             << setw(15) << left << gpus[i].getNamaSeri()
             << setw(15) << left << to_string(gpus[i].getJumlahMemori()) + " GB"
             << setw(15) << left << gpus[i].getTipeMemori()
             << setw(15) << left << "Rp" + to_string(gpus[i].getHarga()) << endl;
    }
    cout << endl;

    // Tabel RAM
    cout << "--- RAM ---" << endl;
    printLine(100);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Merk" << setw(15) << left << "Tipe RAM"
         << setw(15) << left << "Kapasitas" << setw(15) << left << "Tahun Rilis"
         << setw(15) << left << "Harga" << endl;
    printLine(100);

    for (int i = 0; i < rams.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << rams[i].getNama()
             << setw(15) << left << rams[i].getMerk()
             << setw(15) << left << rams[i].getTipeRAM()
             << setw(15) << left << to_string(rams[i].getKapasitas()) + " GB"
             << setw(15) << left << rams[i].getTahunRilis()
             << setw(15) << left << "Rp" + to_string(rams[i].getHarga()) << endl;
    }
    cout << endl;

    // Tabel Penyimpanan
    cout << "--- PENYIMPANAN ---" << endl;
    printLine(100);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Merk" << setw(15) << left << "Tipe"
         << setw(15) << left << "Kapasitas" << setw(15) << left << "Tahun Rilis"
         << setw(15) << left << "Harga" << endl;
    printLine(100);

    for (int i = 0; i < penyimpanans.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << penyimpanans[i].getNama()
             << setw(15) << left << penyimpanans[i].getMerk()
             << setw(15) << left << penyimpanans[i].getTipePenyimpanan()
             << setw(15) << left << to_string(penyimpanans[i].getKapasitas()) + " GB"
             << setw(15) << left << penyimpanans[i].getTahunRilis()
             << setw(15) << left << "Rp" + to_string(penyimpanans[i].getHarga()) << endl;
    }
    cout << endl;

    // Tabel Monitor
    cout << "--- MONITOR ---" << endl;
    printLine(100);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Ukuran Layar" << setw(15) << left << "Aspek Rasio"
         << setw(15) << left << "Resolusi" << setw(15) << left << "Tipe Panel"
         << setw(15) << left << "Refresh Rate" << endl;
    printLine(100);

    for (int i = 0; i < monitors.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << monitors[i].getNama()
             << setw(15) << left << monitors[i].getUkuranLayar()
             << setw(15) << left << monitors[i].getAspekRasio()
             << setw(15) << left << monitors[i].getResolusi()
             << setw(15) << left << monitors[i].getTipePanel()
             << setw(15) << left << to_string(monitors[i].getRefreshRate()) + " Hz" << endl;
    }
    cout << endl;

    // Tabel Keyboard Wireless
    cout << "--- KEYBOARD WIRELESS ---" << endl;
    printLine(110);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Tipe" << setw(10) << left << "Ukuran"
         << setw(15) << left << "Warna" << setw(15) << left << "Tipe Koneksi"
         << setw(15) << left << "Kapasitas Baterai" << setw(15) << left << "Range Koneksi" << endl;
    printLine(110);

    for (int i = 0; i < keyboardWs.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << keyboardWs[i].getNama()
             << setw(15) << left << keyboardWs[i].getTipeKeyboard()
             << setw(10) << left << keyboardWs[i].getUkuran()
             << setw(15) << left << keyboardWs[i].getWarna()
             << setw(15) << left << keyboardWs[i].getTipeKoneksi()
             << setw(15) << left << to_string(keyboardWs[i].getKapasitasBaterai()) + " mAh"
             << setw(15) << left << keyboardWs[i].getRangeKoneksi() << endl;
    }
    cout << endl;

    // Tabel Keyboard Kabel
    cout << "--- KEYBOARD KABEL ---" << endl;
    printLine(100);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Tipe" << setw(10) << left << "Ukuran"
         << setw(15) << left << "Warna" << setw(15) << left << "Panjang Kabel"
         << setw(15) << left << "Tipe USB" << endl;
    printLine(100);

    for (int i = 0; i < keyboardKs.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << keyboardKs[i].getNama()
             << setw(15) << left << keyboardKs[i].getTipeKeyboard()
             << setw(10) << left << keyboardKs[i].getUkuran()
             << setw(15) << left << keyboardKs[i].getWarna()
             << setw(15) << left << keyboardKs[i].getPanjangKabel()
             << setw(15) << left << keyboardKs[i].getTipeUSB() << endl;
    }
    cout << endl;

    // Tabel Mouse Wireless
    cout << "--- MOUSE WIRELESS ---" << endl;
    printLine(110);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Bentuk" << setw(15) << left << "DPI"
         << setw(15) << left << "Warna" << setw(15) << left << "Kapasitas Baterai"
         << setw(15) << left << "Daya Tahan" << endl;
    printLine(110);

    for (int i = 0; i < mouseWs.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << mouseWs[i].getNama()
             << setw(15) << left << mouseWs[i].getBentukMouse()
             << setw(15) << left << mouseWs[i].getDPI()
             << setw(15) << left << mouseWs[i].getWarna()
             << setw(15) << left << to_string(mouseWs[i].getKapasitasBaterai()) + " mAh"
             << setw(15) << left << mouseWs[i].getDayaTahanBaterai() << endl;
    }
    cout << endl;

    // Tabel Mouse Kabel
    cout << "--- MOUSE KABEL ---" << endl;
    printLine(100);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(15) << left << "Bentuk" << setw(15) << left << "DPI"
         << setw(10) << left << "Warna" << setw(10) << left << "Tombol"
         << setw(15) << left << "Panjang Kabel" << setw(15) << left << "Tipe USB" << endl;
    printLine(100);

    for (int i = 0; i < mouseKs.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << mouseKs[i].getNama()
             << setw(15) << left << mouseKs[i].getBentukMouse()
             << setw(15) << left << mouseKs[i].getDPI()
             << setw(10) << left << mouseKs[i].getWarna()
             << setw(10) << left << mouseKs[i].getJumlahTombol()
             << setw(15) << left << mouseKs[i].getPanjangKabel()
             << setw(15) << left << mouseKs[i].getTipeUSB() << endl;
    }
    cout << endl;

    // Menampilkan informasi komputer dalam bentuk tabel
    cout << "\n========== INFORMASI KOMPUTER ==========\n"
         << endl;
    printLine(130);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(20) << left << "Motherboard" << setw(15) << left << "CPU"
         << setw(15) << left << "GPU" << setw(25) << left << "RAM"
         << setw(20) << left << "Penyimpanan" << setw(15) << left << "Total Harga" << endl;
    printLine(130);

    for (int i = 0; i < komputers.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << komputers[i].getNama()
             << setw(20) << left << komputers[i].getMotherboard().getNama()
             << setw(15) << left << komputers[i].getCPU().getNama()
             << setw(15) << left << komputers[i].getGPU().getNama()
             << setw(25) << left << to_string(komputers[i].getListRAM().size()) + "x " + to_string(komputers[i].getListRAM()[0].getKapasitas()) + "GB " + komputers[i].getListRAM()[0].getTipeRAM()
             << setw(20) << left << to_string(komputers[i].getPenyimpanan().getKapasitas()) + "GB " + komputers[i].getPenyimpanan().getTipePenyimpanan()
             << setw(15) << left << "Rp" + to_string(komputers[i].getTotalHarga()) << endl;
    }
    cout << endl;

    // Menampilkan informasi setup PC dalam bentuk tabel
    cout << "\n========== INFORMASI SETUP PC ==========\n"
         << endl;
    printLine(130);
    cout << setw(5) << left << "No" << setw(25) << left << "Nama"
         << setw(25) << left << "Komputer" << setw(25) << left << "Monitor"
         << setw(25) << left << "Keyboard" << setw(25) << left << "Mouse"
         << setw(15) << left << "Total Harga" << endl;
    printLine(130);

    for (int i = 0; i < setupPCs.size(); i++)
    {
        cout << setw(5) << left << i + 1
             << setw(25) << left << setupPCs[i].getNama()
             << setw(25) << left << setupPCs[i].getKomputer().getNama()
             << setw(25) << left << setupPCs[i].getListMonitor().getNama() + " (" + to_string(setupPCs[i].getListMonitor().getRefreshRate()) + "Hz)"
             << setw(25) << left << setupPCs[i].getKeyboard().getNama()
             << setw(25) << left << setupPCs[i].getMouse().getNama()
             << setw(15) << left << "Rp" + to_string(setupPCs[i].getTotalHarga()) << endl;
    }
    cout << endl;

    return 0;
}