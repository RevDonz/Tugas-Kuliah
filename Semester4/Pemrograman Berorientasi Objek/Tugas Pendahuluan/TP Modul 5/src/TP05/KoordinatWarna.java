/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP05;

/**
 *
 * @author ASUS
 */
class KoordinatWarna extends Koordinat {
    String warna;
    
    public KoordinatWarna(int x, int y, String warna) {
        super(x, y);
        this.warna = warna;
    }
    
    public String hitungJarak(KoordinatWarna data) {
        double jarak = super.hitungJarak(data);
        return "Jarak koordinat : " + jarak + " warna : " + warna;
    }
    
    public String getWarna() {
        return warna;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }
}
