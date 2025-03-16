from Keyboard import Keyboard

class KeyboardKabel(Keyboard):
    def __init__(self, panjang_kabel="", tipe_USB="", nama="", tipe_keyboard="", ukuran="", warna="", tipe_koneksi=""):
        super().__init__(nama, tipe_keyboard, ukuran, warna, tipe_koneksi)
        self.panjang_kabel = panjang_kabel
        self.tipe_USB = tipe_USB
    
    def setPanjangKabel(self, panjang_kabel):
        self.panjang_kabel = panjang_kabel
    
    def setTipeUSB(self, tipe_USB):
        self.tipe_USB = tipe_USB
    
    def getPanjangKabel(self):
        return self.panjang_kabel
    
    def getTipeUSB(self):
        return self.tipe_USB