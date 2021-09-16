/*
 * @lc app=leetcode id=104 lang=rust
 *
 * [104] Maximum Depth of Binary Tree
 */

// @lc code=start
// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
//
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::cell::RefCell;
use std::rc::Rc;

type Node = Rc<RefCell<TreeNode>>;

impl Solution {
    pub fn max_depth(root: Option<Node>) -> i32 {
        Self::find_depth(&root)
    }

    fn find_depth(node: &Option<Node>) -> i32 {
        match node {
            Some(node) => {
                let node = node.borrow();
                1 + i32::max(Self::find_depth(&node.left), Self::find_depth(&node.right))
            }
            None => 0,
        }
    }
}
// impl Solution {
//     pub fn max_depth(root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
//         match root {
//         None => return 0,
//         _ => ()
//         }
//         return i32::max(Solution::max_depth(root.borrow_mut().left.take()), Solution::max_depth(root.borrow_mut().right.take())) + 1;
//     }
// }
// @lc code=end
