/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Jurnal06;

/**
 *
 * @author ASUS
 */
public class PersegiPanjang extends Bentuk implements BangunDatar {
    private int panjang;
    private int lebar;
    
    public PersegiPanjang(String nama, int panjang, int lebar) {
        super(nama);
        this.panjang = panjang;
        this.lebar = lebar;
    }

    public double hitungKeliling() {
        return 2 * (this.lebar + this.panjang);
    }
    
    public double hitungLuas() {
        return this.lebar * this.panjang;
    }
    
    public void info() {
        System.out.println("Nama Persegi Panjang : " + this.getNama());
        System.out.println("Panjang              : " + this.panjang);
        System.out.println("Lebar                : " + this.lebar);
        System.out.println("Luas                 : " + this.hitungLuas());
        System.out.println("Keliling             : " + this.hitungKeliling());
    }
    
}
