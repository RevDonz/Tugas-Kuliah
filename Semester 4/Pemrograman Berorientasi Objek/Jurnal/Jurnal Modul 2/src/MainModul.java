/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ASUS
 */
public class MainModul {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int A = 3;
        int B = 2;
        int[][] arrMatrix = new int[A][B];
        
        
        setMatrix(arrMatrix);
        printMatrix(arrMatrix);
        printMatrixTranspose(arrMatrix);
    }
    
    static void setMatrix(int[][] arr) {
        arr[0][0] = 1;
        arr[0][1] = 2;
        arr[1][0] = 3;
        arr[1][1] = 4;
        arr[2][0] = 5;
        arr[2][1] = 6;
    }
    
    static void printMatrix(int[][] arr) {
        System.out.println("isi Matrix");
        for(int i = 0; i < arr.length; i++) {
            for(int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
    
    static void printMatrixTranspose(int[][] arr) {
        System.out.println("Hasil Transpose");
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 3; ++j) {
                System.out.print(arr[j][i] + " ");
            }
            System.out.println();
        }
    }
    
}
