/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tp.modul.pkg2;

/**
 *
 * @author ASUS
 */
public class TPModul2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Fibonacci();
        Array2D();
    }
    
    static void PrintArr(int[][] arr) {
        for(int i = 0; i < arr.length; i++) {
            for(int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
    
    static void Fibonacci() {
        int limit=9, past = 1, current = 1, fibonacci = 1;
        for (int i = 1; i <= limit; i++){
            System.out.print(current + " ");
            fibonacci = past + current;
            past = current;
            current = fibonacci;
        }
        System.out.println("\n");
    }
    
    static void Array2D() {
        int batas = 4;
        int[][] arr2 = new int[batas][];
        arr2[0] = new int[3];
        arr2[1] = new int[4];
        arr2[2] = new int[5];
        arr2[3] = new int[6];
        
        for(int i = 0; i < batas; i++) {
            for(int j = 0; j < arr2[i].length; j++) {
                if(i == 0) {
                    arr2[i][j] = (j+1)*3;
                } else if(i == 1) {
                    arr2[i][j] = (j*2)+1;
                } else if(i == 2) {
                    arr2[i][j] = Faktorial(j+1);
                } else if(i == 3) {
                    arr2[i][j] = j+1;
                }
            }
        }
        PrintArr(arr2);
    }
    
    static int Faktorial(int num) {
        if(num == 0) {
            return 1;
        }      
        return num * Faktorial(num-1);
    }
    
}
