/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Jurnal05;

/**
 *
 * @author ASUS
 */
class Semut extends Serangga {
    private Koordinat lokasiSarang;
    Koordinat[] rute = new Koordinat[3];
    int jmlRute;
    
    public Semut(String warna, int posisiX, int posisiY) {
        super(warna,posisiX, posisiY);
    }
    
    public Koordinat getLokasiSarang() {
        return lokasiSarang;
    }
    
    @Override
    public void gerak(int posisiX, int posisiY) {
        super.gerak(posisiX, posisiY);
        tambahRute(new Koordinat(posisiX, posisiY));
    }
    
    private void tambahRute(Koordinat rute) {
        if(this.jmlRute < 3) this.rute[this.jmlRute] = rute;
        this.jmlRute++;
    }
    
    public void kembaliKeSarang() {
        super.setPosisi(lokasiSarang);
        this.rute = new Koordinat[3];
        this.jmlRute = 0;
    }

    public void setLokasiSarang(Koordinat lokasiSarang) {
        this.lokasiSarang = lokasiSarang;
    }

    public Koordinat[] getRute() {
        return rute;
    }

    public void setRute(Koordinat[] rute) {
        this.rute = rute;
    }

    public int getJmlRute() {
        return jmlRute;
    }

    public void setJmlRute(int jmlRute) {
        this.jmlRute = jmlRute;
    }

    
}
