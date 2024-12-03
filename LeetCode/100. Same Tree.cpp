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
    void fun(TreeNode* p,TreeNode* q,bool & f){
        if(p == NULL && q == NULL) return ;
        if(q){
            if(p == NULL){
                f = false;
                return;
            }
        }
        if(p){
            if(q == NULL){
                f = false;
                return;
            }
        }
        if(p->val != q->val){
            f = false;
            return;
        }
        fun(p->left,q->left,f);
        fun(p->right,q->right,f);   
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool f = true;
        fun(p,q,f);
        return f;
    }
};