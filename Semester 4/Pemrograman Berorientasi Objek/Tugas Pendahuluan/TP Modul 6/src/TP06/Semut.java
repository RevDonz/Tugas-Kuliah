/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP06;

/**
 *
 * @author ASUS
 */
public class Semut extends Serangga {
    Koordinat posisi;

    public Semut(String warna, int x, int y) {
        super(warna);
        posisi = new Koordinat(x, y);

    }
    
    public void gerak(int[] axis) {
        posisi = new Koordinat(axis[0], axis[1]);
    }
    
    public void info() {
        System.out.println("Posisi Semut : " + this.posisi.getX());        
        System.out.println("             : " + this.posisi.getY());
    }
}
