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
class Koordinat3D extends Koordinat {
    private int z;

    public Koordinat3D(int x, int y, int z) {
        super(x, y);
        this.z = z;
    }
    
    public double hitungJarak(Koordinat3D data) {
        double jarakX = data.getX() - super.getX();
        double jarakY = data.getY() - super.getY();
        double jarakZ = data.getZ() - z;
        double result = Math.sqrt(Math.pow(jarakX, 2) + Math.pow(jarakY, 2) + Math.pow(jarakZ, 2));
        return result;
    }
    
    public int getZ() {
        return z;
    }

    public void setZ(int z) {
        this.z = z;
    }
    
}
