from Mouse import Mouse

class MouseKabel(Mouse):
    def __init__(self, panjang_kabel="", tipe_USB="", nama="", bentuk_mouse="", DPI="", warna="", jumlah_tombol=0, tipe_koneksi=""):
        super().__init__(nama, bentuk_mouse, DPI, warna, jumlah_tombol, tipe_koneksi)
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