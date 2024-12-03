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
    TreeNode* nNode = new TreeNode(0);
    TreeNode* h = nNode;
    

    void con(TreeNode* root)
    {
        if(root==NULL) return; 

        increasingBST(root->left);

        // v.push_back(root->val);
        nNode->right = new TreeNode(root->val);
        nNode->left = NULL;
        nNode = nNode->right;

        increasingBST(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {

        con(root);
        return h->right;
        // return h->right; 
    }
};