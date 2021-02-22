import java.io.*;
import java.util.*;

public class test {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        Stack<Character> stack = new Stack<Character>();
        // System.out.println("hello");
        // System.out.println(stack.peek());
        boolean done = false;
        for (char c: str.toCharArray())
        {
            if (done)
            {
                break;
            }
            if (stack.empty())
            {
                if (c == '(' || c == ')')
                {
                    stack.push(c);
                }
                continue;
            }
            if (c == '(' || c == ')')
            {
                if (stack.peek() == c)
                {
                    System.out.println(tr);
                    done = true;
                }
                stack.push(c);
            }
        }
        if (!done)
        {
            System.out.println(true);
        }
    }
}