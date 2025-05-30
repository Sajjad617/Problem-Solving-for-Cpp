#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void levelOrder(Node *root, int x)
{
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty())
    {
        pair<Node*, int> pr = q.front();
        q.pop();
        Node* f = pr.first;
        int level = pr.second;
        if(level == x){
            cout << f->val << " ";
            // return;
        }

        if(f->left) q.push({f->left, level+1});    
        if(f->right) q.push({f->right, level+1});
        
    }
}
int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    // cout << "l=" << l << " " << r << endl;;
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    int h = maxHeight(root);
    int x;
    cin >> x;
    if(x >= h){
        cout << "Invalid" << endl;
    }

    levelOrder(root, x);
    return 0;
}