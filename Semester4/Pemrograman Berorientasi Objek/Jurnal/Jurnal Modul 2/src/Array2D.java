import java.util.Scanner;

public class Array2D {
    public static void main(String[] args) {
        int batas = 4;
        int[][] arr2 = new int[batas][];
        arr2[0] = new int[3];
        arr2[1] = new int[4];
        arr2[2] = new int[5];
        arr2[3] = new int[6];
        
        Array2D(arr2);
        
        Scanner scan = new Scanner(System.in);
        System.out.print("Bilangan yang dicari: ");
        int bil = scan.nextInt();
        SearchBil(bil, arr2);
        
        System.out.print("Bilangan yang dicari: ");
        bil = scan.nextInt();
        SearchBil(bil, arr2);
    }
    
    static void SearchBil(int bil, int[][] arr) {
        for(int i = 0; i < arr.length; i++) {
            for(int j = 0; j < arr[i].length; j++) {
                if(bil == arr[i][j]) {
                    System.out.println(bil + " berada di baris " + (i+1) + " kolom " + (j+1));
                }
            }
        }
    }
    
    static void Array2D(int[][] arr2) {
        
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < arr2[i].length; j++) {
                if(i == 0) {
                    arr2[i][j] = (j+1)*5;
                } else if(i == 1) {
                    arr2[i][j] = (j*2)+2;
                } else if(i == 2) {
                    arr2[i][j] = Kuadrat(j+1);
                } else if(i == 3) {
                    arr2[i][j] = j+3;
                }
            }
        }
        PrintArr(arr2);
    }
    
    static void PrintArr(int[][] arr) {
        for(int i = 0; i < arr.length; i++) {
            for(int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
    
    static int Kuadrat(int num) {
        return num*num;
    }
}
