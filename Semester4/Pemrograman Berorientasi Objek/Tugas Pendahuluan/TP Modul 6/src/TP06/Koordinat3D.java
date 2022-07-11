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
public class Koordinat3D extends Koordinat {
    private int z;
    
    public Koordinat3D(int x, int y, int z) {
        super(x, y);
        this.z = z;
    }
    
    public int getZ() {
        return z;
    }

    public void setZ(int z) {
        this.z = z;
    }
}
