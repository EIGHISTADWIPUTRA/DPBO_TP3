from Komponen import Komponen

class GPU(Komponen):
    def __init__(self, nama_seri="", jumlah_memori=0, tipe_memori="", nama="", merk="", tahun_rilis=0, harga=0):
        super().__init__(nama, merk, tahun_rilis, harga)
        self.nama_seri = nama_seri
        self.jumlah_memori = jumlah_memori
        self.tipe_memori = tipe_memori
    
    def setNamaSeri(self, nama_seri):
        self.nama_seri = nama_seri
    
    def setJumlahMemori(self, jumlah_memori):
        self.jumlah_memori = jumlah_memori
    
    def setTipeMemori(self, tipe_memori):
        self.tipe_memori = tipe_memori
    
    def getNamaSeri(self):
        return self.nama_seri
    
    def getJumlahMemori(self):
        return self.jumlah_memori
    
    def getTipeMemori(self):
        return self.tipe_memori