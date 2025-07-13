/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> v;
        while(head!=nullptr)
        {
            v.push_back(head->val);
            head = head->next;
        }

        int re = INT_MIN;
        int n = v.size();
        for(int i=0; i<n; i++)
        {
            re = max(re, v[i]+v[n-1-i]);
        }
        return re;
    }
};