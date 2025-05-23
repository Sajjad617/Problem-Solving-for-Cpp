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
    bool univalued(TreeNode* root, int x) {
        if(root == NULL) return true;
        if(root->val != x) return false; 

        // if(root->left==NULL && root->right==NULL) return true;
        bool l = univalued(root->left, x);
        bool r = univalued(root->right, x);
        if(l==false || r==false) return false;
        return true;
    }

    bool isUnivalTree(TreeNode* root) {

        int x = root->val;
        return univalued(root, x);
        // bool l = isUnivalTree(root->left);
        // bool r = isUnivalTree(root->right);
        
    }
};