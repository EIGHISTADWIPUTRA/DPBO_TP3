from Komponen import Komponen

class Motherboard(Komponen):
    def __init__(self, jumlah_slot_RAM=0, jumlah_slot_Penyimpanan=0, nama="", merk="", tahun_rilis=0, harga=0):
        super().__init__(nama, merk, tahun_rilis, harga)
        self.jumlah_slot_RAM = jumlah_slot_RAM
        self.jumlah_slot_Penyimpanan = jumlah_slot_Penyimpanan
    
    def setJumlahSlotRAM(self, jumlah_slot_RAM):
        self.jumlah_slot_RAM = jumlah_slot_RAM
    
    def setJumlahSlotPenyimpanan(self, jumlah_slot_Penyimpanan):
        self.jumlah_slot_Penyimpanan = jumlah_slot_Penyimpanan
    
    def getJumlahSlotRAM(self):
        return self.jumlah_slot_RAM
    
    def getJumlahSlotPenyimpanan(self):
        return self.jumlah_slot_Penyimpanan