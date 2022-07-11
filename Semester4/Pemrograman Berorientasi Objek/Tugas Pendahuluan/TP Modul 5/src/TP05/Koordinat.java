/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TP05;

/**
 *
 * @author ASUS
 */
public class Koordinat {
    private int x;
    private int y;
    
    public Koordinat(int x, int y) {
        this.x = x;
        this.y = y;
    }
    
    public double hitungJarak(Koordinat data) {
        double jarakX = data.getX()-x;
        double jarakY = data.getY()-y;
        double result = Math.sqrt(Math.pow(jarakX, 2)+Math.pow(jarakY, 2));
        return result;
    }
    
    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    
}

