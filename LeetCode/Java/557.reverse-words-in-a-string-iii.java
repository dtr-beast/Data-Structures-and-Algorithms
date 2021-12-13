/*
 * @lc app=leetcode id=344 lang=java
 *
 * [344] Reverse String
 */
class Solution {
    public void reverse(StringBuilder s, int i, int j) {
        while (i < j) {
            char ch = s.charAt(i);
            s.setCharAt(i++, s.charAt(j));
            s.setCharAt(j--, ch);
        }
    }

    public String reverseWords(String s) {
        StringBuilder str = new StringBuilder(s);

        int i = 0;
        for (int j = 0; j < str.length(); j++) {
            if (str.charAt(j) == ' ') {
                reverse(str, i, j - 1);
                i = j + 1;
            }
        }
        reverse(str, i, str.length() - 1);
        return str.toString();
    }
}