import java.util.Scanner;

public class SumofMultiplesof3_100010 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int sum = 0;

        while (n != 0){
            if (n % 3 == 0){
                sum += n;
            }
            n--;
        }

        System.out.println(sum);
    }
}
