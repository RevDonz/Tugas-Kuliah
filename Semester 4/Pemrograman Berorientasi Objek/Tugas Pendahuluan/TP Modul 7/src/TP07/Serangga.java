/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP07;

/**
 *
 * @author ASUS
 */
public abstract class Serangga {
    private final int jmlKaki = 6;
    private String warna;
    private Koordinat posisi;
            
    public Serangga(String warna, Koordinat k) {
        this.warna = warna;
        this.posisi = k;
    }
    
    public abstract void info();
    public abstract void gerak(Koordinat k);
    public abstract void gerak(Koordinat3D k);
    
    public Koordinat getPosisi() {
        return this.posisi;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }

    public int getJmlKaki() {
        return jmlKaki;
    }

    public String getWarna() {
        return warna;
    }

    
    
}
