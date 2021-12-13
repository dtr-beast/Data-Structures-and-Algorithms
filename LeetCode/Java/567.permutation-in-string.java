import java.util.HashMap;

class Solution {
    private boolean checkArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != 0) {
                return false;
            }
        }
        return true;
    }

    public boolean checkInclusion(String s1, String s2) {
        if (s1.length() > s2.length()) {
            return false;
        }

        int[] arr = new int[26];
        HashMap<Character, Boolean> exist = new HashMap<>();

        for (int i = 0; i < s1.length(); i++) {
            arr[s1.charAt(i) - 'a']++;
            exist.put(s1.charAt(i), true);
        }

        int i = 0;
        int k = s1.length();
        for (; i < k; i++) {
            if (exist.getOrDefault(s2.charAt(i), false)) {
                arr[s2.charAt(i) - 'a']--;
            }
        }

        for (; i < s2.length(); i++) {
            if (checkArray(arr)) {
                return true;
            }
            if (exist.getOrDefault(s2.charAt(i - k), false)) {
                arr[s2.charAt(i - k) - 'a']++;
            }
            if (exist.getOrDefault(s2.charAt(i), false)) {
                arr[s2.charAt(i) - 'a']--;
            }
        }
        return checkArray(arr);
    }
}