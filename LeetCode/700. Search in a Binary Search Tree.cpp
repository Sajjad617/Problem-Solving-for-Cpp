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
    TreeNode * nNode = NULL;

    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return nNode;
        if(root->val == val) 
        {
            nNode = root;

        }
        searchBST(root->left, val);
        searchBST(root->right, val);

        return nNode;
        
    }
};