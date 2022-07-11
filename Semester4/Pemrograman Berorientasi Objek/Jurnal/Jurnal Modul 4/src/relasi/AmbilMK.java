/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package relasi;

import entitas.Mahasiswa;
import entitas.MataKuliah;

/**
 *
 * @author ASUS
 */
public class AmbilMK {
    MataKuliah mataKuliah;
    Mahasiswa mahasiswa;
    String nilai;
    String tahunAjaran;
    
    public AmbilMK(MataKuliah mataKuliah, Mahasiswa mahasiswa, String nilai, String tahunAjaran) {
        this.mataKuliah = mataKuliah;
        this.mahasiswa = mahasiswa;
        this.nilai = nilai;
        this.tahunAjaran = tahunAjaran;
    }   
    
    public MataKuliah getMataKuliah() {
        return mataKuliah;
    }

    public void setMataKuliah(MataKuliah mataKuliah) {
        this.mataKuliah = mataKuliah;
    }

    public Mahasiswa getMahasiswa() {
        return mahasiswa;
    }

    public void setMahasiswa(Mahasiswa mahasiswa) {
        this.mahasiswa = mahasiswa;
    }

    public String getNilai() {
        return nilai;
    }

    public void setNilai(String nilai) {
        this.nilai = nilai;
    }

    public String getTahunAjaran() {
        return tahunAjaran;
    }

    public void setTahunAjaran(String tahunAjaran) {
        this.tahunAjaran = tahunAjaran;
    }
    
}
