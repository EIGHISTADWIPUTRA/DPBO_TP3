from SetUpPC import SetUpPC
from Komputer import Komputer
from Motherboard import Motherboard
from CPU import CPU
from GPU import GPU
from RAM import RAM
from Penyimpanan import Penyimpanan
from Monitor import Monitor
from Keyboard import Keyboard
from KeyboardWireless import KeyboardWireless
from KeyboardKabel import KeyboardKabel
from Mouse import Mouse
from MouseWireless import MouseWireless
from MouseKabel import MouseKabel

def printLine(length):
    print("-" * length)

def main():
    # Membuat komponen motherboard (3 data)
    motherboard1 = Motherboard(4, 2, "B550 Aorus Elite", "Gigabyte", 2021, 2500000)
    motherboard2 = Motherboard(4, 4, "ROG Strix Z590-E Gaming", "ASUS", 2022, 4200000)
    motherboard3 = Motherboard(2, 1, "A320M-K", "ASUS", 2020, 950000)
    motherboards = [motherboard1, motherboard2, motherboard3]

    # Membuat komponen CPU (3 data)
    cpu1 = CPU("Ryzen 5", 5, 6, "Ryzen 5 5600X", "AMD", 2020, 3700000)
    cpu2 = CPU("Core i9", 12, 16, "Core i9-12900K", "Intel", 2022, 8500000)
    cpu3 = CPU("Ryzen 3", 3, 4, "Ryzen 3 3300X", "AMD", 2020, 1500000)
    cpus = [cpu1, cpu2, cpu3]

    # Membuat komponen GPU (3 data)
    gpu1 = GPU("RTX 3060", 12, "GDDR6", "GeForce RTX 3060", "NVIDIA", 2021, 5500000)
    gpu2 = GPU("RTX 3080", 10, "GDDR6X", "GeForce RTX 3080", "NVIDIA", 2021, 12000000)
    gpu3 = GPU("RX 6600", 8, "GDDR6", "Radeon RX 6600", "AMD", 2021, 4500000)
    gpus = [gpu1, gpu2, gpu3]

    # Membuat komponen RAM (3 data)
    ram1 = RAM("DDR4 3200MHz", 16, "Vengeance LPX", "Corsair", 2020, 900000)
    ram2 = RAM("DDR4 3600MHz", 8, "Trident Z RGB", "G.Skill", 2021, 850000)
    ram3 = RAM("DDR4 2666MHz", 8, "Fury", "Kingston", 2019, 600000)
    rams = [ram1, ram2, ram3]

    # Membuat komponen Penyimpanan (3 data)
    penyimpanan1 = Penyimpanan("SSD", 1000, "970 EVO Plus", "Samsung", 2020, 1800000)
    penyimpanan2 = Penyimpanan("HDD", 2000, "Barracuda", "Seagate", 2019, 850000)
    penyimpanan3 = Penyimpanan("SSD", 500, "Blue SN550", "Western Digital", 2021, 900000)
    penyimpanans = [penyimpanan1, penyimpanan2, penyimpanan3]

    # Membuat komponen Monitor (3 data)
    monitor1 = Monitor("Odyssey G5", "27 inch", "16:9", "2560x1440", "VA", 144)
    monitor2 = Monitor("UltraGear 27GL83A", "27 inch", "16:9", "2560x1440", "IPS", 165)
    monitor3 = Monitor("ProArt PA278QV", "27 inch", "16:9", "2560x1440", "IPS", 75)
    monitors = [monitor1, monitor2, monitor3]

# main.py (lanjutan)
    # Membuat komponen Keyboard Wireless (3 data)
    keyboardW1 = KeyboardWireless(1000, "Bluetooth", "10m", "Logitech G915", "Mechanical", "TKL", "Hitam", "Wireless")
    keyboardW2 = KeyboardWireless(1500, "2.4GHz", "12m", "Keychron K2", "Mechanical", "75%", "Abu-abu", "Wireless")
    keyboardW3 = KeyboardWireless(800, "Bluetooth", "8m", "MX Keys", "Membrane", "Full", "Hitam", "Wireless")
    keyboardWs = [keyboardW1, keyboardW2, keyboardW3]

    # Membuat komponen Keyboard Kabel (3 data)
    keyboardK1 = KeyboardKabel("1.8m", "USB-A", "Razer Huntsman Elite", "Mechanical", "Full", "Hitam", "Kabel")
    keyboardK2 = KeyboardKabel("2m", "USB-C", "Ducky One 2 Mini", "Mechanical", "60%", "Putih", "Kabel")
    keyboardK3 = KeyboardKabel("1.5m", "USB-A", "Logitech G Pro X", "Mechanical", "TKL", "Hitam", "Kabel")
    keyboardKs = [keyboardK1, keyboardK2, keyboardK3]

    # Membuat komponen Mouse Wireless (3 data)
    mouseW1 = MouseWireless(1000, "40 jam", "Bluetooth", "10m", "Logitech G Pro X Superlight", "Simetris", "25600 DPI", "Putih", 5, "Wireless")
    mouseW2 = MouseWireless(750, "30 jam", "2.4GHz", "12m", "Razer Viper Ultimate", "Simetris", "20000 DPI", "Hitam", 8, "Wireless")
    mouseW3 = MouseWireless(600, "20 jam", "Bluetooth", "8m", "Logitech MX Master 3", "Ergonomis", "8000 DPI", "Abu-abu", 7, "Wireless")
    mouseWs = [mouseW1, mouseW2, mouseW3]

    # Membuat komponen Mouse Kabel (3 data)
    mouseK1 = MouseKabel("1.8m", "USB-A", "Logitech G502 Hero", "Ergonomis", "25600 DPI", "Hitam", 11, "Kabel")
    mouseK2 = MouseKabel("2m", "USB-C", "Razer DeathAdder V2", "Ergonomis", "20000 DPI", "Hitam", 8, "Kabel")
    mouseK3 = MouseKabel("1.5m", "USB-A", "SteelSeries Rival 3", "Simetris", "8500 DPI", "Hitam", 6, "Kabel")
    mouseKs = [mouseK1, mouseK2, mouseK3]

    # Membuat vector untuk RAM
    ramList1 = [ram1, ram1]
    ramList2 = [ram2, ram2, ram2, ram2]
    ramList3 = [ram3, ram3]

    # Membuat komputer (3 data)
    komputer1 = Komputer("Gaming PC High-End", motherboard2, cpu2, ramList2, gpu2, penyimpanan1)
    komputer2 = Komputer("Gaming PC Mid-Range", motherboard1, cpu1, ramList1, gpu1, penyimpanan1)
    komputer3 = Komputer("PC Office", motherboard3, cpu3, ramList3, gpu3, penyimpanan3)
    komputers = [komputer1, komputer2, komputer3]

    # Membuat setup PC (3 data)
    setupPC1 = SetUpPC("Setup Gaming High-End", komputer1, monitor2, keyboardW1, mouseW2)
    setupPC2 = SetUpPC("Setup Gaming Mid-Range", komputer2, monitor1, keyboardK1, mouseK1)
    setupPC3 = SetUpPC("Setup Office", komputer3, monitor3, keyboardW3, mouseW3)
    setupPCs = [setupPC1, setupPC2, setupPC3]

    # Menampilkan informasi komponen dalam bentuk tabel dinamis
    print("========== INFORMASI KOMPONEN ==========\n")

    # Tabel Motherboard
    print("--- MOTHERBOARD ---")
    printLine(100)
    print(f"{'No':<5}{'Nama':<25}{'Merk':<15}{'Tahun Rilis':<15}{'Slot RAM':<15}{'Slot Storage':<15}{'Harga':<15}")
    printLine(100)

    for i in range(len(motherboards)):
        print(f"{i+1:<5}{motherboards[i].getNama():<25}{motherboards[i].getMerk():<15}{motherboards[i].getTahunRilis():<15}{motherboards[i].getJumlahSlotRAM():<15}{motherboards[i].getJumlahSlotPenyimpanan():<15}{'Rp'+str(motherboards[i].getHarga()):<15}")
    print()

    # Tabel CPU
    print("--- CPU ---")
    printLine(100)
    print(f"{'No':<5}{'Nama':<25}{'Merk':<15}{'Seri':<15}{'Generasi':<15}{'Jumlah Core':<15}{'Harga':<15}")
    printLine(100)

    for i in range(len(cpus)):
        print(f"{i+1:<5}{cpus[i].getNama():<25}{cpus[i].getMerk():<15}{cpus[i].getNamaSeri():<15}{cpus[i].getGenerasi():<15}{cpus[i].getJumlahCore():<15}{'Rp'+str(cpus[i].getHarga()):<15}")
    print()

    # Tabel GPU
    print("--- GPU ---")
    printLine(100)
    print(f"{'No':<5}{'Nama':<25}{'Merk':<15}{'Seri':<15}{'Jumlah Memori':<15}{'Tipe Memori':<15}{'Harga':<15}")
    printLine(100)

    for i in range(len(gpus)):
        print(f"{i+1:<5}{gpus[i].getNama():<25}{gpus[i].getMerk():<15}{gpus[i].getNamaSeri():<15}{str(gpus[i].getJumlahMemori())+' GB':<15}{gpus[i].getTipeMemori():<15}{'Rp'+str(gpus[i].getHarga()):<15}")
    print()

    # Tabel RAM
    print("--- RAM ---")
    printLine(100)
    print(f"{'No':<5}{'Nama':<25}{'Merk':<15}{'Tipe RAM':<15}{'Kapasitas':<15}{'Tahun Rilis':<15}{'Harga':<15}")
    printLine(100)

    for i in range(len(rams)):
        print(f"{i+1:<5}{rams[i].getNama():<25}{rams[i].getMerk():<15}{rams[i].getTipeRAM():<15}{str(rams[i].getKapasitas())+' GB':<15}{rams[i].getTahunRilis():<15}{'Rp'+str(rams[i].getHarga()):<15}")
    print()

    # Tabel Penyimpanan
    print("--- PENYIMPANAN ---")
    printLine(100)
    print(f"{'No':<5}{'Nama':<25}{'Merk':<15}{'Tipe':<15}{'Kapasitas':<15}{'Tahun Rilis':<15}{'Harga':<15}")
    printLine(100)

    for i in range(len(penyimpanans)):
        print(f"{i+1:<5}{penyimpanans[i].getNama():<25}{penyimpanans[i].getMerk():<15}{penyimpanans[i].getTipePenyimpanan():<15}{str(penyimpanans[i].getKapasitas())+' GB':<15}{penyimpanans[i].getTahunRilis():<15}{'Rp'+str(penyimpanans[i].getHarga()):<15}")
    print()

    # Tabel Monitor
    print("--- MONITOR ---")
    printLine(100)
    print(f"{'No':<5}{'Nama':<25}{'Ukuran Layar':<15}{'Aspek Rasio':<15}{'Resolusi':<15}{'Tipe Panel':<15}{'Refresh Rate':<15}")
    printLine(100)

    for i in range(len(monitors)):
        print(f"{i+1:<5}{monitors[i].getNama():<25}{monitors[i].getUkuranLayar():<15}{monitors[i].getAspekRasio():<15}{monitors[i].getResolusi():<15}{monitors[i].getTipePanel():<15}{str(monitors[i].getRefreshRate())+' Hz':<15}")
    print()

    # Tabel Keyboard Wireless
    print("--- KEYBOARD WIRELESS ---")
    printLine(110)
    print(f"{'No':<5}{'Nama':<25}{'Tipe':<15}{'Ukuran':<10}{'Warna':<15}{'Tipe Koneksi':<15}{'Kapasitas Baterai':<15}{'Range Koneksi':<15}")
    printLine(110)

    for i in range(len(keyboardWs)):
        print(f"{i+1:<5}{keyboardWs[i].getNama():<25}{keyboardWs[i].getTipeKeyboard():<15}{keyboardWs[i].getUkuran():<10}{keyboardWs[i].getWarna():<15}{keyboardWs[i].getTipeKoneksi():<15}{str(keyboardWs[i].getKapasitasBaterai())+' mAh':<15}{keyboardWs[i].getRangeKoneksi():<15}")
    print()

    # Tabel Keyboard Kabel
    print("--- KEYBOARD KABEL ---")
    printLine(100)
    print(f"{'No':<5}{'Nama':<25}{'Tipe':<15}{'Ukuran':<10}{'Warna':<15}{'Panjang Kabel':<15}{'Tipe USB':<15}")
    printLine(100)

    for i in range(len(keyboardKs)):
        print(f"{i+1:<5}{keyboardKs[i].getNama():<25}{keyboardKs[i].getTipeKeyboard():<15}{keyboardKs[i].getUkuran():<10}{keyboardKs[i].getWarna():<15}{keyboardKs[i].getPanjangKabel():<15}{keyboardKs[i].getTipeUSB():<15}")
    print()

    # Tabel Mouse Wireless
    print("--- MOUSE WIRELESS ---")
    printLine(110)
    print(f"{'No':<5}{'Nama':<25}{'Bentuk':<15}{'DPI':<15}{'Warna':<15}{'Kapasitas Baterai':<15}{'Daya Tahan':<15}")
    printLine(110)

    for i in range(len(mouseWs)):
        print(f"{i+1:<5}{mouseWs[i].getNama():<25}{mouseWs[i].getBentukMouse():<15}{mouseWs[i].getDPI():<15}{mouseWs[i].getWarna():<15}{str(mouseWs[i].getKapasitasBaterai())+' mAh':<15}{mouseWs[i].getDayaTahanBaterai():<15}")
    print()

    # Tabel Mouse Kabel
    print("--- MOUSE KABEL ---")
    printLine(100)
    print(f"{'No':<5}{'Nama':<25}{'Bentuk':<15}{'DPI':<15}{'Warna':<10}{'Tombol':<10}{'Panjang Kabel':<15}{'Tipe USB':<15}")
    printLine(100)

    for i in range(len(mouseKs)):
        print(f"{i+1:<5}{mouseKs[i].getNama():<25}{mouseKs[i].getBentukMouse():<15}{mouseKs[i].getDPI():<15}{mouseKs[i].getWarna():<10}{mouseKs[i].getJumlahTombol():<10}{mouseKs[i].getPanjangKabel():<15}{mouseKs[i].getTipeUSB():<15}")
    print()

    # Menampilkan informasi komputer dalam bentuk tabel
    print("\n========== INFORMASI KOMPUTER ==========\n")
    printLine(130)
    print(f"{'No':<5}{'Nama':<25}{'Motherboard':<20}{'CPU':<15}{'GPU':<15}{'RAM':<25}{'Penyimpanan':<20}{'Total Harga':<15}")
    printLine(130)

    for i in range(len(komputers)):
        print(f"{i+1:<5}{komputers[i].getNama():<25}{komputers[i].getMotherboard().getNama():<20}{komputers[i].getCPU().getNama():<15}{komputers[i].getGPU().getNama():<15}{str(len(komputers[i].getListRAM()))+'x '+str(komputers[i].getListRAM()[0].getKapasitas())+'GB '+komputers[i].getListRAM()[0].getTipeRAM():<25}{str(komputers[i].getPenyimpanan().getKapasitas())+'GB '+komputers[i].getPenyimpanan().getTipePenyimpanan():<20}{'Rp'+str(komputers[i].getTotalHarga()):<15}")
    print()

    # Menampilkan informasi setup PC dalam bentuk tabel
    print("\n========== INFORMASI SETUP PC ==========\n")
    printLine(130)
    print(f"{'No':<5}{'Nama':<25}{'Komputer':<25}{'Monitor':<25}{'Keyboard':<25}{'Mouse':<25}{'Total Harga':<15}")
    printLine(130)

    for i in range(len(setupPCs)):
        print(f"{i+1:<5}{setupPCs[i].getNama():<25}{setupPCs[i].getKomputer().getNama():<25}{setupPCs[i].getListMonitor().getNama()+' ('+str(setupPCs[i].getListMonitor().getRefreshRate())+'Hz)':<25}{setupPCs[i].getKeyboard().getNama():<25}{setupPCs[i].getMouse().getNama():<25}{'Rp'+str(setupPCs[i].getTotalHarga()):<15}")
    print()

if __name__ == "__main__":
    main()