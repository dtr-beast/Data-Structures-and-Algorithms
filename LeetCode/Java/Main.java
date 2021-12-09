import java.util.*;

public class Main {
    static String map[] = new String[] { " ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

    private static void combo(String inp, String result) {
        if (inp.length() == 0) {
            System.out.println(result);
            return;
        }

        int firstChar = Integer.parseInt(String.valueOf(inp.charAt(0)));
        String codeString = map[firstChar];
        for (int i = 0; i < codeString.length(); i++) {
            String nextChar = inp.substring(1);
            combo(nextChar, result + codeString.charAt(i));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        combo(input, "");
        sc.close();
    }
}