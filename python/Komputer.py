from Motherboard import Motherboard
from CPU import CPU
from GPU import GPU
from RAM import RAM
from Penyimpanan import Penyimpanan

class Komputer:
    def __init__(self, nama="", motherboard=Motherboard(), cpu=CPU(), listRAM=[], gpu=GPU(), penyimpanan=Penyimpanan()):
        self.nama = nama
        self.motherboard = motherboard
        self.cpu = cpu
        self.listRAM = listRAM
        self.gpu = gpu
        self.penyimpanan = penyimpanan
        
        self.total_harga = self.motherboard.getHarga() + self.cpu.getHarga() + self.gpu.getHarga() + self.penyimpanan.getHarga()
        for ram in self.listRAM:
            self.total_harga += ram.getHarga()
    
    def setNama(self, nama):
        self.nama = nama
    
    def setMotherboard(self, motherboard):
        self.motherboard = motherboard
        self.updateTotalHarga()
    
    def setCPU(self, cpu):
        self.cpu = cpu
        self.updateTotalHarga()
    
    def setListRAM(self, listRAM):
        self.listRAM = listRAM
        self.updateTotalHarga()
    
    def setGPU(self, gpu):
        self.gpu = gpu
        self.updateTotalHarga()
    
    def setPenyimpanan(self, penyimpanan):
        self.penyimpanan = penyimpanan
        self.updateTotalHarga()
    
    def addRAM(self, ram):
        self.listRAM.append(ram)
        self.total_harga += ram.getHarga()
    
    def getNama(self):
        return self.nama
    
    def getMotherboard(self):
        return self.motherboard
    
    def getCPU(self):
        return self.cpu
    
    def getListRAM(self):
        return self.listRAM
    
    def getGPU(self):
        return self.gpu
    
    def getPenyimpanan(self):
        return self.penyimpanan
    
    def getTotalHarga(self):
        return self.total_harga
    
    def updateTotalHarga(self):
        self.total_harga = self.motherboard.getHarga() + self.cpu.getHarga() + self.gpu.getHarga() + self.penyimpanan.getHarga()
        for ram in self.listRAM:
            self.total_harga += ram.getHarga()