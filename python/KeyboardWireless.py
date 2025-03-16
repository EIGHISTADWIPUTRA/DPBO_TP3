from Keyboard import Keyboard

class KeyboardWireless(Keyboard):
    def __init__(self, kapasitas_baterai=0, tipe_koneksi="", range_koneksi="", nama="", tipe_keyboard="", ukuran="", warna="", tipe_keyboard_base=""):
        super().__init__(nama, tipe_keyboard, ukuran, warna, tipe_keyboard_base)
        self.kapasitas_baterai = kapasitas_baterai
        self.tipe_koneksi = tipe_koneksi
        self.range_koneksi = range_koneksi
    
    def setKapasitasBaterai(self, kapasitas_baterai):
        self.kapasitas_baterai = kapasitas_baterai
    
    def setTipeKoneksi(self, tipe_koneksi):
        self.tipe_koneksi = tipe_koneksi
    
    def setRangeKoneksi(self, range_koneksi):
        self.range_koneksi = range_koneksi
    
    def getKapasitasBaterai(self):
        return self.kapasitas_baterai
    
    def getTipeKoneksi(self):
        return self.tipe_koneksi
    
    def getRangeKoneksi(self):
        return self.range_koneksi