import java.util.Scanner;

public class LongestWord_100032 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String words = sc.nextLine();
        String word;

        String longestWord = "";

        while (words.indexOf(" ") != -1){
            word = words.substring(0, words.indexOf(" "));
            words = words.substring(words.indexOf(" ") + 1);

            if (word.length() > longestWord.length()){
                longestWord = word;
            }
        }

        if (words.length() > longestWord.length()){
            longestWord = words;
        }

        System.out.println(longestWord);
    }

}
