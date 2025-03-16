# SetUpPC.py
from Komputer import Komputer
from Monitor import Monitor
from Keyboard import Keyboard
from Mouse import Mouse

class SetUpPC:
    def __init__(self, nama="", komputer=Komputer(), list_monitor=Monitor(), keyboard=Keyboard(), mouse=Mouse()):
        self.nama = nama
        self.komputer = komputer
        self.list_monitor = list_monitor
        self.keyboard = keyboard
        self.mouse = mouse
        self.total_harga = komputer.getTotalHarga()
    
    def setNama(self, nama):
        self.nama = nama
    
    def setKomputer(self, komputer):
        self.komputer = komputer
        self.updateTotalHarga()
    
    def setListMonitor(self, list_monitor):
        self.list_monitor = list_monitor
        self.updateTotalHarga()
    
    def setKeyboard(self, keyboard):
        self.keyboard = keyboard
        self.updateTotalHarga()
    
    def setMouse(self, mouse):
        self.mouse = mouse
        self.updateTotalHarga()
    
    def getNama(self):
        return self.nama
    
    def getKomputer(self):
        return self.komputer
    
    def getListMonitor(self):
        return self.list_monitor
    
    def getKeyboard(self):
        return self.keyboard
    
    def getMouse(self):
        return self.mouse
    
    def getTotalHarga(self):
        return self.total_harga
    
    def updateTotalHarga(self):
        self.total_harga = self.komputer.getTotalHarga()
    
    def displayInfo(self):
        print("=== Informasi Setup PC ===")
        print(f"Nama Setup: {self.nama}")
        
        print("\n=== Informasi Komputer ===")
        print(f"Nama Komputer: {self.komputer.getNama()}")
        
        print("\n--- Motherboard ---")
        print(f"Nama: {self.komputer.getMotherboard().getNama()}")
        print(f"Merk: {self.komputer.getMotherboard().getMerk()}")
        print(f"Jumlah Slot RAM: {self.komputer.getMotherboard().getJumlahSlotRAM()}")
        print(f"Jumlah Slot Penyimpanan: {self.komputer.getMotherboard().getJumlahSlotPenyimpanan()}")
        print(f"Tahun Rilis: {self.komputer.getMotherboard().getTahunRilis()}")
        print(f"Harga: Rp{self.komputer.getMotherboard().getHarga()}")
        
        print("\n--- CPU ---")
        print(f"Nama: {self.komputer.getCPU().getNama()}")
        print(f"Merk: {self.komputer.getCPU().getMerk()}")
        print(f"Seri: {self.komputer.getCPU().getNamaSeri()}")
        print(f"Generasi: {self.komputer.getCPU().getGenerasi()}")
        print(f"Jumlah Core: {self.komputer.getCPU().getJumlahCore()}")
        print(f"Tahun Rilis: {self.komputer.getCPU().getTahunRilis()}")
        print(f"Harga: Rp{self.komputer.getCPU().getHarga()}")
        
        print("\n--- GPU ---")
        print(f"Nama: {self.komputer.getGPU().getNama()}")
        print(f"Merk: {self.komputer.getGPU().getMerk()}")
        print(f"Seri: {self.komputer.getGPU().getNamaSeri()}")
        print(f"Jumlah Memori: {self.komputer.getGPU().getJumlahMemori()} GB")
        print(f"Tipe Memori: {self.komputer.getGPU().getTipeMemori()}")
        print(f"Tahun Rilis: {self.komputer.getGPU().getTahunRilis()}")
        print(f"Harga: Rp{self.komputer.getGPU().getHarga()}")
        
        print("\n--- RAM ---")
        i = 1
        for ram in self.komputer.getListRAM():
            print(f"RAM {i}:")
            print(f"  Nama: {ram.getNama()}")
            print(f"  Merk: {ram.getMerk()}")
            print(f"  Tipe: {ram.getTipeRAM()}")
            print(f"  Kapasitas: {ram.getKapasitas()} GB")
            print(f"  Tahun Rilis: {ram.getTahunRilis()}")
            print(f"  Harga: Rp{ram.getHarga()}")
            i += 1
        
        print("\n--- Penyimpanan ---")
        print(f"Nama: {self.komputer.getPenyimpanan().getNama()}")
        print(f"Merk: {self.komputer.getPenyimpanan().getMerk()}")
        print(f"Tipe: {self.komputer.getPenyimpanan().getTipePenyimpanan()}")
        print(f"Kapasitas: {self.komputer.getPenyimpanan().getKapasitas()} GB")
        print(f"Tahun Rilis: {self.komputer.getPenyimpanan().getTahunRilis()}")
        print(f"Harga: Rp{self.komputer.getPenyimpanan().getHarga()}")
        
        print("\n=== Informasi Monitor ===")
        print(f"Nama: {self.list_monitor.getNama()}")
        print(f"Ukuran Layar: {self.list_monitor.getUkuranLayar()}")
        print(f"Aspek Rasio: {self.list_monitor.getAspekRasio()}")
        print(f"Resolusi: {self.list_monitor.getResolusi()}")
        print(f"Tipe Panel: {self.list_monitor.getTipePanel()}")
        print(f"Refresh Rate: {self.list_monitor.getRefreshRate()} Hz")
        
        print("\n=== Informasi Keyboard ===")
        print(f"Nama: {self.keyboard.getNama()}")
        print(f"Tipe: {self.keyboard.getTipeKeyboard()}")
        print(f"Ukuran: {self.keyboard.getUkuran()}")
        print(f"Warna: {self.keyboard.getWarna()}")
        print(f"Tipe Koneksi: {self.keyboard.getTipeKoneksi()}")
        
        print("\n=== Informasi Mouse ===")
        print(f"Nama: {self.mouse.getNama()}")
        print(f"Bentuk: {self.mouse.getBentukMouse()}")
        print(f"DPI: {self.mouse.getDPI()}")
        print(f"Warna: {self.mouse.getWarna()}")
        print(f"Jumlah Tombol: {self.mouse.getJumlahTombol()}")
        print(f"Tipe Koneksi: {self.mouse.getTipeKoneksi()}")
        
        print("\n=== Total Harga Setup ===")
        print(f"Total Harga: Rp{self.total_harga}")