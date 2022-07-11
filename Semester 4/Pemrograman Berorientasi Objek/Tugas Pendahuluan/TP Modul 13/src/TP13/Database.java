/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP13;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import javax.swing.JOptionPane;

/**
 *
 * @author ASUS
 */
public class Database {
    static final String DB_URL = "jdbc:mysql://localhost/db_tp13";
    static final String DB_USER = "root";
    static final String DB_PASS = "";
    static Connection conn;
    static Statement statement;
    static ResultSet rs;
    
    public Database() throws SQLException {
        try {
            conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
            statement = conn.createStatement();
        } catch(Exception e) {
            JOptionPane.showMessageDialog(null, ""+e.getMessage(), "Connection Error", JOptionPane.WARNING_MESSAGE);
        }
    }
    
    public ResultSet getData(String SQLString){
        try{
            rs = statement.executeQuery(SQLString);
        } catch(Exception e){
            JOptionPane.showMessageDialog(null, "Error : " + e.getMessage(), "Communication Error", JOptionPane.WARNING_MESSAGE);
        }
        return rs;
    }
    
    public void query(String SQLString){
        try{
            statement.executeUpdate(SQLString);
        } catch(Exception e){
            JOptionPane.showMessageDialog(null, "Error : " + e.getMessage(), "Communication Error",
            JOptionPane.WARNING_MESSAGE);
        }
    }
}
