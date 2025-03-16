class Mouse:
    def __init__(self, nama="", bentuk_mouse="", DPI="", warna="", jumlah_tombol=0, tipe_koneksi=""):
        self.nama = nama
        self.bentuk_mouse = bentuk_mouse
        self.DPI = DPI
        self.warna = warna
        self.jumlah_tombol = jumlah_tombol
        self.tipe_koneksi = tipe_koneksi
    
    def setNama(self, nama):
        self.nama = nama
    
    def setBentukMouse(self, bentuk_mouse):
        self.bentuk_mouse = bentuk_mouse
    
    def setDPI(self, DPI):
        self.DPI = DPI
    
    def setWarna(self, warna):
        self.warna = warna
    
    def setJumlahTombol(self, jumlah_tombol):
        self.jumlah_tombol = jumlah_tombol
    
    def setTipeKoneksi(self, tipe_koneksi):
        self.tipe_koneksi = tipe_koneksi
    
    def getNama(self):
        return self.nama
    
    def getBentukMouse(self):
        return self.bentuk_mouse
    
    def getDPI(self):
        return self.DPI
    
    def getWarna(self):
        return self.warna
    
    def getJumlahTombol(self):
        return self.jumlah_tombol
    
    def getTipeKoneksi(self):
        return self.tipe_koneksi