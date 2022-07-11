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
public class Lebah extends Serangga {
    private Koordinat3D posisi;
    
    public Lebah(String warna, Koordinat3D k) {
        super(warna, k);
        this.posisi = k;
    }
    
    @Override
    public void gerak(Koordinat3D k) {
        this.posisi = k;
    }
    
    @Override
    public void info() {
        System.out.println("Warna : " + super.getWarna());
        System.out.println("X : " + this.posisi.getX());
        System.out.println("Y : " + this.posisi.getY());
        System.out.println("Z : " + this.posisi.getZ());
    }

    @Override
    public void gerak(Koordinat k) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
