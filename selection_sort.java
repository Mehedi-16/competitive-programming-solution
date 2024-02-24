import java.util.Scanner;

class sorting3 {
    void sort(int arr[], int n) {
       
        for (int i = 0; i < n - 1; i++) 
        {
           int min = i;
            for (int j = i + 1; j < n; j++) 
            {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            if (min != i) {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
}

public class selection_sort {
    public static void main(String[] args) {
        sorting3 obj = new sorting3();
        Scanner in = new Scanner(System.in);
        int[] arr = new int[10];
        int i;
        System.out.println("enter numbers:");
        for (i = 0; i < 10; i++) {
            arr[i] = in.nextInt();
        }
        int n = 10;
        obj.sort(arr, n);
        System.out.println("sorted array\n");
        for (i = 0; i < 10; i++) {
            System.out.println(arr[i]);
        }
    }
}
