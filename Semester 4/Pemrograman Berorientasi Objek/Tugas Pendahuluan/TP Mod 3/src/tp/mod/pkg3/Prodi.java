/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tp.mod.pkg3;

/**
 *
 * @author ASUS
 */
public class Prodi {
    private String kode;
    private String nama;
    
    public void setKode(String kode) {
        if (kode != null && kode.length() == 2) {
            this.kode = kode;
        }
    }
    
    public void setNama(String nama) {
        this.nama = nama;
    }
    
    public String getKode() {
        return this.kode;
    }
    
    public String getNama() {
        return this.nama;
    }
}
