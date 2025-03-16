class Keyboard:
    def __init__(self, nama="", tipe_keyboard="", ukuran="", warna="", tipe_koneksi=""):
        self.nama = nama
        self.tipe_keyboard = tipe_keyboard
        self.ukuran = ukuran
        self.warna = warna
        self.tipe_koneksi = tipe_koneksi
    
    def setNama(self, nama):
        self.nama = nama
    
    def setTipeKeyboard(self, tipe_keyboard):
        self.tipe_keyboard = tipe_keyboard
    
    def setUkuran(self, ukuran):
        self.ukuran = ukuran
    
    def setWarna(self, warna):
        self.warna = warna
    
    def setTipeKoneksi(self, tipe_koneksi):
        self.tipe_koneksi = tipe_koneksi
    
    def getNama(self):
        return self.nama
    
    def getTipeKeyboard(self):
        return self.tipe_keyboard
    
    def getUkuran(self):
        return self.ukuran
    
    def getWarna(self):
        return self.warna
    
    def getTipeKoneksi(self):
        return self.tipe_koneksi