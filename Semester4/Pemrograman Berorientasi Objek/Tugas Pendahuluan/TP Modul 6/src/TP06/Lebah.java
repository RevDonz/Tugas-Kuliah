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
public class Lebah extends Serangga implements BisaTerbang {
    Koordinat3D posisi;

    public Lebah(String color, int x, int y, int z) {
        super(color);
        posisi = new Koordinat3D(x, y, z);
    }
    
    public void gerak(int[] axis) {
        posisi = new Koordinat3D(axis[0], axis[1], axis[2]);
    }
    
    public void info() {
        System.out.println("Posisi lebah : " + this.posisi.getX());        
        System.out.println("             : " + this.posisi.getY());
        System.out.println("             : " + this.posisi.getZ());

    }
    public void terbang(int x, int y, int z) {
        int currentX = this.posisi.getX() + x;
        int currentY = this.posisi.getY() + y;
        int currentZ = this.posisi.getZ() + z;

        posisi = new Koordinat3D(currentX, currentY, currentZ);
    }
    
}
