# Janji
Saya Muhammad Bintang Eighista Dwiputra dengan NIM 2304137 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Desain Program

## Class Diagram

![UML Class Diagram](https://github.com/user-attachments/assets/50e54407-5aa9-42c4-98e1-2e02e8b7335d)

## Penjelasan Class
1. **Komponen** (Base class)
   - Atribut: nama, merk, tahun_rilis, harga
   - Parent class untuk semua komponen komputer (CPU, GPU, RAM, Motherboard, Penyimpanan)

2. **CPU** (extends Komponen)
   - Atribut tambahan: nama_seri, generasi, jumlah_core
   - Merepresentasikan prosesor komputer

3. **GPU** (extends Komponen)
   - Atribut tambahan: nama_seri, jumlah_memori, tipe_memori
   - Merepresentasikan kartu grafis

4. **RAM** (extends Komponen)
   - Atribut tambahan: tipe_RAM, kapasitas
   - Merepresentasikan memori RAM

5. **Motherboard** (extends Komponen)
   - Atribut tambahan: jumlah_slot_RAM, jumlah_slot_Penyimpanan
   - Merepresentasikan motherboard komputer

6. **Penyimpanan** (extends Komponen)
   - Atribut tambahan: tipe_penyimpanan, kapasitas
   - Merepresentasikan media penyimpanan (SSD/HDD)

7. **Keyboard** (Base class)
   - Atribut: nama, tipe_keyboard, ukuran, warna, tipe_koneksi
   - Parent class untuk tipe keyboard

8. **KeyboardKabel** (extends Keyboard)
   - Atribut tambahan: panjang_kabel, tipe_USB
   - Merepresentasikan keyboard dengan kabel

9. **KeyboardWireless** (extends Keyboard)
   - Atribut tambahan: kapasitas_baterai, tipe_koneksi, range_koneksi
   - Merepresentasikan keyboard nirkabel

10. **Mouse** (Base class)
    - Atribut: nama, bentuk_mouse, DPI, warna, jumlah_tombol, tipe_koneksi
    - Parent class untuk tipe mouse

11. **MouseKabel** (extends Mouse)
    - Atribut tambahan: panjang_kabel, tipe_USB
    - Merepresentasikan mouse dengan kabel

12. **MouseWireless** (extends Mouse)
    - Atribut tambahan: kapasitas_baterai, daya_tahan_baterai, tipe_koneksi, range_koneksi
    - Merepresentasikan mouse nirkabel

13. **Monitor**
    - Atribut: nama, ukuran_layar, aspek_rasio, resolusi, tipe_panel, refresh_rate
    - Merepresentasikan monitor

14. **Komputer** (Composition)
    - Menggunakan composition dengan atribut: motherboard, cpu, vector<RAM>, gpu, penyimpanan
    - Menggabungkan berbagai komponen menjadi satu komputer

15. **SetUpPC** (Composition)
    - Menggunakan composition dengan atribut: komputer, monitor, keyboard, mouse
    - Menggabungkan komputer dan periferal menjadi satu setup PC lengkap

## Relasi antar Class
1. **Inheritance (Pewarisan)**:
   - Komponen → CPU, GPU, RAM, Motherboard, Penyimpanan
   - Keyboard → KeyboardKabel, KeyboardWireless
   - Mouse → MouseKabel, MouseWireless

2. **Composition (Komposisi)**:
   - Komputer memiliki Motherboard, CPU, RAM, GPU, dan Penyimpanan
   - SetUpPC memiliki Komputer, Monitor, Keyboard, dan Mouse

# Alur Program

1. **Inisialisasi Komponen**:
   - Program dimulai dengan membuat objek-objek dasar untuk setiap komponen (Motherboard, CPU, GPU, RAM, Penyimpanan, Monitor, Keyboard, Mouse)
   - Setiap objek diberi nilai atribut yang sesuai dengan tipe komponennya

2. **Membuat Rakitan Komputer**:
   - Program menggunakan objek-objek komponen yang telah dibuat untuk membuat objek Komputer
   - Beberapa komponen seperti RAM disimpan dalam vector untuk mendukung multiple RAM sticks

3. **Membuat Setup PC**:
   - Objek Komputer dikombinasikan dengan objek Monitor, Keyboard, dan Mouse untuk membuat objek SetUpPC
   - Total harga dihitung secara otomatis berdasarkan harga setiap komponen

4. **Menampilkan Informasi**:
   - Program menampilkan informasi lengkap tentang setiap komponen dalam bentuk tabel
   - Informasi detail mengenai rakitan Komputer dan Setup PC juga ditampilkan
   - Format tampilan dibuat rapi dengan padding dan pemisah untuk memudahkan pembacaan

5. **Implementasi Konsep OOP**:
   - **Inheritance**: Digunakan untuk memodelkan hubungan "is-a" (contoh: CPU "is-a" Komponen)
   - **Composition**: Digunakan untuk memodelkan hubungan "has-a" (contoh: Komputer "has-a" CPU)
   - **Array of Object**: Digunakan untuk menyimpan multiple objek sejenis (contoh: vector<RAM>)
   - **Encapsulation**: Semua atribut kelas diakses melalui getter dan setter

# Dokumentasi (Contoh C++)

## Output Program

![Output Program 1](https://github.com/user-attachments/assets/745c90b8-108e-4181-9da1-f2b1d788ec88)

![Output Program 2](https://github.com/user-attachments/assets/0e86167e-183c-48c2-becc-18a4e5c120e8)

![Output Program 2](https://github.com/user-attachments/assets/657c1080-8a8a-4ab1-adfc-0de4e3a063d6)

## Penjelasan Hasil
Program berhasil menampilkan informasi komponen komputer dalam bentuk tabel terstruktur. Setiap tabel menampilkan atribut-atribut spesifik dari masing-masing komponen. Program juga berhasil mengimplementasikan konsep inheritance, composition, dan array of object.
