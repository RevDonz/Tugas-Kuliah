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
public abstract class Serangga {
    private final int jmlKaki = 6;
    private String warna;
    
    abstract void info();
    abstract void gerak(int[] axis);

    public void setWarna(String warna) {
        this.warna = warna;
    }

    public int getJmlKaki() {
        return jmlKaki;
    }

    public String getWarna() {
        return warna;
    }

    public Serangga(String warna) {
        this.warna = warna;
    }
    
}
