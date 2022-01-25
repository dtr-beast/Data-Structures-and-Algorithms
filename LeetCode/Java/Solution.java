import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> list = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        
        if (root == null) {
            return list;
        }

        q.offer(root);
        while (!q.isEmpty()) {
            List<Integer> tempList = new ArrayList<>();
            int i = q.size();
            while (i-- != 0) {
                TreeNode curr = q.poll();
                // if (curr.left != null) {
                    q.offer(curr.left);
                // }
                // if (curr.right != null) {
                    q.offer(curr.right);
                // }
                tempList.add(curr.val);
            }
            list.add(tempList);
        }
        return list;
    }
}