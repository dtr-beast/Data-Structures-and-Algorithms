// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem116.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=116 lang=cpp
 *
 * [116] Populating Next Right Pointers in Each Node
 */
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
// @lc code=start
/*
    Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    Node *connect(Node *root)
    {
        if (root == NULL)
        {
            return root;
        }

        // Traverse Level by Level
        Node *level = root;
        while (level->left != NULL)
        {

            Node *current = level;
            while (current != NULL)
            {
                // Connect Left to Right
                current->left->next = current->right;

                // If the next is also connected of the current level
                if (current->next != NULL)
                {
                    // Go to it, take its left, and then connect it
                    current->right->next = current->next->left;
                }
                // Then move on sideways, in a level
                current = current->next;
            }
            // Proceed to next level
            level = level->left;
        }
        return root;
    }
};
// @lc code=end

/*
1st Try
class Solution
{
    void connector(Node *left, Node *right)
    {
        if (left == NULL)
        {
            return;
        }

        left->next = right;
        connector(left->left, left->right);
        connector(right->left, right->right);
        connector(left->right, right->left);
    }

public:
    Node *connect(Node *root)
    {
        if (root == NULL)
        {
            return root;
        }
        connector(root->left, root->right);
        return root;
    }
};
*/