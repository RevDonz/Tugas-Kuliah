/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP10;

/**
 *
 * @author ASUS
 */
public class SmallIntegerException extends Exception {
    private static int totalException;
    
    public SmallIntegerException(String msg) {
        super(msg);
        this.totalException++;
    }
    
    public static int getTotalException() {
        return totalException;
    }
    
    public void print() {
        System.out.println("Total Exception " + this.totalException);
    }
}
