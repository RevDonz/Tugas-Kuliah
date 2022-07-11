/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jurnal13;

import java.sql.SQLException;

/**
 *
 * @author ASUS
 */
public class Pegawai {
    private String nama;
    private String posisi;
    private String tgl_lahir;
    
    public Pegawai(String nama, String posisi, String tgl_lahir) {
        this.nama = nama;
        this.posisi = posisi;
        this.tgl_lahir = tgl_lahir;
    }

    public String getNama() {
        return nama;
    }

    public String getPosisi() {
        return posisi;
    }

    public String getTgl_lahir() {
        return tgl_lahir;
    }

    public void insertPegawai() throws SQLException{
        Database db = new Database();
        String sql = "INSERT INTO pegawai VALUES ("+null+", '"+this.getNama()+"','"+this.getPosisi()+"','"+this.getTgl_lahir()+"');";
        db.query(sql);
    }
    
    public static void deletePegawai(String nama) throws SQLException {
        Database db = new Database();
        String sql = "DELETE FROM pegawai WHERE nama=" + "'" + nama + "'";
        db.query(sql);
    }
    
}
