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
    int size(ListNode *head){
        ListNode *temp = head;
        int cnt =0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    int getDecimalValue(ListNode* head) {
        int sum = 0;
        ListNode *temp = head;
        int sz = size(head);
        int po = pow(2, sz-1);
        while(temp != NULL){
            if(temp->val == 1){
                sum = sum + po;
            }
            po = po/2;
            temp = temp->next;
        }
        return sum;
    }
};