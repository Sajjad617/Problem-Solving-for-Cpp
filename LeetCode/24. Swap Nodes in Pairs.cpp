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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *temp = head;
        // ListNode *temp = head;
        while(temp != NULL){
            swap(temp->val, temp->next->val);
            if(temp->next == NULL || temp->next->next == NULL){
                break;
            }
            else{
                cout << "*";
                temp = temp->next->next;
                if(temp->next== NULL) break;

            }
        }
        return head;
    }
};