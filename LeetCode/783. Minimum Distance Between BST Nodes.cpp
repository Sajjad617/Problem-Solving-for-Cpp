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
    int mn = INT_MAX;
    int minDiffInBST(TreeNode* root) {
        if(root->left == NULL && root->right==NULL) return 0;
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
        int mn = INT_MAX;

        for(int i = 0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {

                if(v[i] > v[j])
                {
                    int cal = v[i]-v[j];
                
                    if(mn > cal)
                    {
                        mn = cal;
                        
                    }
                }
                else if(v[i] < v[j])
                {
                    int cal = v[j]-v[i];
                
                    if(mn > cal)
                    {
                        mn = cal;
                    }
                }

                
            }
        }
        return mn;
        
    }
};