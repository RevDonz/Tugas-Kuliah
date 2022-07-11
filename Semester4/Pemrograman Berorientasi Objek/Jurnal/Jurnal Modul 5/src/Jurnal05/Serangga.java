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
public class Serangga {
    private int jmlKaki = 6;
    private String warna;
    private Koordinat posisi;
    
    public Serangga(String warna, int posisiX, int posisiY) {
        this.warna = warna;
        this.posisi = new Koordinat(posisiX, posisiY);
    }
    
    public void gerak(int posisiX, int posisiY) {
        this.posisi = new Koordinat(posisiX, posisiY);
    }
    
    public int getJmlKaki() {
        return jmlKaki;
    }

    public void setJmlKaki(int jmlKaki) {
        this.jmlKaki = jmlKaki;
    }

    public String getWarna() {
        return warna;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }

    public Koordinat getPosisi() {
        return posisi;
    }

    public void setPosisi(Koordinat posisi) {
        this.posisi = posisi;
    }
    
    
    
}
