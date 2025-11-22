public class Test {
    public static void main(String[] args) {
        int num = 245;
        int temp = num;

        while (temp > 0) {
            System.out.print(temp % 10 + " ");
            temp /= 10;
        }
    }
}
