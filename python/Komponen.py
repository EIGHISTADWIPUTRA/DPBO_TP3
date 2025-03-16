class Komponen:
    def __init__(self, nama="", merk="", tahun_rilis=0, harga=0):
        self.nama = nama
        self.merk = merk
        self.tahun_rilis = tahun_rilis
        self.harga = harga
    
    def setNama(self, nama):
        self.nama = nama
    
    def setMerk(self, merk):
        self.merk = merk
    
    def setTahunRilis(self, tahun_rilis):
        self.tahun_rilis = tahun_rilis
    
    def setHarga(self, harga):
        self.harga = harga
    
    def getNama(self):
        return self.nama
    
    def getMerk(self):
        return self.merk
    
    def getTahunRilis(self):
        return self.tahun_rilis
    
    def getHarga(self):
        return self.harga