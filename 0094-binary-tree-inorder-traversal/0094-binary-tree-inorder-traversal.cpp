/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> inorder;
        stack<TreeNode*>st;
        TreeNode* node = root;

        while(node != NULL || !st.empty())
        {
            while(node != NULL)
            {
               st.push(node);
               node = node->left;
            }
            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;
        }
        return inorder;
    }
};