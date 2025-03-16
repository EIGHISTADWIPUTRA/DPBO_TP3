from Komponen import Komponen

class Penyimpanan(Komponen):
    def __init__(self, tipe_penyimpanan="", kapasitas=0, nama="", merk="", tahun_rilis=0, harga=0):
        super().__init__(nama, merk, tahun_rilis, harga)
        self.tipe_penyimpanan = tipe_penyimpanan
        self.kapasitas = kapasitas
    
    def setTipePenyimpanan(self, tipe_penyimpanan):
        self.tipe_penyimpanan = tipe_penyimpanan
    
    def setKapasitas(self, kapasitas):
        self.kapasitas = kapasitas
    
    def getTipePenyimpanan(self):
        return self.tipe_penyimpanan
    
    def getKapasitas(self):
        return self.kapasitas