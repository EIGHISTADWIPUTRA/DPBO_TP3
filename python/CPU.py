from Komponen import Komponen

class CPU(Komponen):
    def __init__(self, nama_seri="", generasi=0, jumlah_core=0, nama="", merk="", tahun_rilis=0, harga=0):
        super().__init__(nama, merk, tahun_rilis, harga)
        self.nama_seri = nama_seri
        self.generasi = generasi
        self.jumlah_core = jumlah_core
    
    def setNamaSeri(self, nama_seri):
        self.nama_seri = nama_seri
    
    def setGenerasi(self, generasi):
        self.generasi = generasi
    
    def setJumlahCore(self, jumlah_core):
        self.jumlah_core = jumlah_core
    
    def getNamaSeri(self):
        return self.nama_seri
    
    def getGenerasi(self):
        return self.generasi
    
    def getJumlahCore(self):
        return self.jumlah_core