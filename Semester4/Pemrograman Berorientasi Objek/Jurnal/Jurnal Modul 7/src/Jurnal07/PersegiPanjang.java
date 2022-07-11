/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Jurnal07;

/**
 *
 * @author ASUS
 */
public class PersegiPanjang extends BangunDatar {
    private int panjang;
    private int lebar;
    
    public int getPanjang() {
        return panjang;
    }

    public void setPanjang(int panjang) {
        this.panjang = panjang;
    }

    public int getLebar() {
        return lebar;
    }

    public void setLebar(int lebar) {
        this.lebar = lebar;
    }

    public PersegiPanjang(String nama, int panjang, int lebar) {
        super(nama);
        this.panjang = panjang;
        this.lebar = lebar;
    }
    
    public double hitungLuas() {
        return this.panjang * this.lebar;
    }
    
    public double hitungKeliling() {
        return 2 * (this.lebar + this.panjang);
    }
}
