/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurnal12;

import java.util.Date;

/**
 *
 * @author ASUS
 */
public class Pegawai {
    private String nama;
    private String posisi;
    private Date tglLahir;

    public Pegawai(String nama, String posisi, Date tglLahir) {
        this.nama = nama;
        this.posisi = posisi;
        this.tglLahir = tglLahir;
    }

    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getPosisi() {
        return posisi;
    }

    public void setPosisi(String posisi) {
        this.posisi = posisi;
    }

    public Date getTglLahir() {
        return tglLahir;
    }

    public void setTglLahir(Date tglLahir) {
        this.tglLahir = tglLahir;
    }
    
}
