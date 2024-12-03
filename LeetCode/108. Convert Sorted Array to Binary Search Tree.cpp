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
    TreeNode * Convert_vector_to_bst(vector<int> nums, int l, int r)
    {
        if(l > r) return NULL;
        int mid = (l+r)/2;
        TreeNode * root = new TreeNode(nums[mid]);
        TreeNode * leftroot = Convert_vector_to_bst(nums, l, mid-1);
        TreeNode * rightroot = Convert_vector_to_bst(nums, mid+1, r);
        root->left = leftroot;
        root->right = rightroot;
         return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        TreeNode * root = Convert_vector_to_bst(nums, 0, nums.size()-1);

        return root;
    }
};