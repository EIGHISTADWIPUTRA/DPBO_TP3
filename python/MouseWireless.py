# MouseWireless.py
from Mouse import Mouse

class MouseWireless(Mouse):
    def __init__(self, kapasitas_baterai=0, daya_tahan_baterai="", tipe_koneksi="", range_koneksi="", nama="", bentuk_mouse="", DPI="", warna="", jumlah_tombol=0, tipe_koneksi_mouse=""):
        super().__init__(nama, bentuk_mouse, DPI, warna, jumlah_tombol, tipe_koneksi_mouse)
        self.kapasitas_baterai = kapasitas_baterai
        self.daya_tahan_baterai = daya_tahan_baterai
        self.tipe_koneksi = tipe_koneksi
        self.range_koneksi = range_koneksi
    
    def setKapasitasBaterai(self, kapasitas_baterai):
        self.kapasitas_baterai = kapasitas_baterai
    
    def setDayaTahanBaterai(self, daya_tahan_baterai):
        self.daya_tahan_baterai = daya_tahan_baterai
    
    def setTipeKoneksi(self, tipe_koneksi):
        self.tipe_koneksi = tipe_koneksi
    
    def setRangeKoneksi(self, range_koneksi):
        self.range_koneksi = range_koneksi
    
    def getKapasitasBaterai(self):
        return self.kapasitas_baterai
    
    def getDayaTahanBaterai(self):
        return self.daya_tahan_baterai
    
    def getTipeKoneksi(self):
        return self.tipe_koneksi
    
    def getRangeKoneksi(self):
        return self.range_koneksi