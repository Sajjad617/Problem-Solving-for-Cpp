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
    bool flag = false;
    bool findTarget(TreeNode* root, int k) {
        if(root->left == NULL && root->right==NULL) return flag;
        queue<TreeNode*> q;
        vector<int>v;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();

            v.push_back(f->val);

            if(f->right) q.push(f->right);
            if(f->left) q.push(f->left);    
            
        }

        for(int i = 0; i<v.size()-1; i++)
        {
            for(int j=i+1; j<=v.size()-1; j++)
            {
                int cal = v[i]+v[j];
                if(cal == k){
                    flag = true; 
                    break;
                }
            }
            if(flag) break;
        }
        return flag;
    }
};