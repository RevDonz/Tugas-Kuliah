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
public class Semut extends Serangga {

    public Semut(String warna, Koordinat k) {
        super(warna, k);
    }
    
    @Override
    public void gerak(Koordinat k) {
        super.getPosisi().setX(k.getX());
        super.getPosisi().setY(k.getY());
    }
    
    @Override
    public void info() {
        System.out.println("Warna : " + super.getWarna());
        System.out.println("X : " + super.getPosisi().getX());
        System.out.println("Y : " + super.getPosisi().getY());
    }
    
    public void gerak(Koordinat3D k) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
