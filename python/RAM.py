from Komponen import Komponen

class RAM(Komponen):
    def __init__(self, tipe_RAM="", kapasitas=0, nama="", merk="", tahun_rilis=0, harga=0):
        super().__init__(nama, merk, tahun_rilis, harga)
        self.tipe_RAM = tipe_RAM
        self.kapasitas = kapasitas
    
    def setTipeRAM(self, tipe_RAM):
        self.tipe_RAM = tipe_RAM
    
    def setKapasitas(self, kapasitas):
        self.kapasitas = kapasitas
    
    def getTipeRAM(self):
        return self.tipe_RAM
    
    def getKapasitas(self):
        return self.kapasitas