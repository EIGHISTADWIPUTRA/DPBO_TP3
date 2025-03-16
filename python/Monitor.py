class Monitor:
    def __init__(self, nama="", ukuran_layar="", aspek_rasio="", resolusi="", tipe_panel="", refresh_rate=0):
        self.nama = nama
        self.ukuran_layar = ukuran_layar
        self.aspek_rasio = aspek_rasio
        self.resolusi = resolusi
        self.tipe_panel = tipe_panel
        self.refresh_rate = refresh_rate
    
    def setNama(self, nama):
        self.nama = nama
    
    def setUkuranLayar(self, ukuran_layar):
        self.ukuran_layar = ukuran_layar
    
    def setAspekRasio(self, aspek_rasio):
        self.aspek_rasio = aspek_rasio
    
    def setResolusi(self, resolusi):
        self.resolusi = resolusi
    
    def setTipePanel(self, tipe_panel):
        self.tipe_panel = tipe_panel
    
    def setRefreshRate(self, refresh_rate):
        self.refresh_rate = refresh_rate
    
    def getNama(self):
        return self.nama
    
    def getUkuranLayar(self):
        return self.ukuran_layar
    
    def getAspekRasio(self):
        return self.aspek_rasio
    
    def getResolusi(self):
        return self.resolusi
    
    def getTipePanel(self):
        return self.tipe_panel
    
    def getRefreshRate(self):
        return self.refresh_rate