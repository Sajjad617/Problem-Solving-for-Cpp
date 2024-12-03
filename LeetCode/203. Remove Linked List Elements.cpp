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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
            return head;
        ListNode* temp = head;
        while (temp->next != NULL) {
            // if (temp->val == val) {
            //     ListNode* deleNode = temp;
            //     temp = temp->next;
            //     delete deleNode;
            // }
            if (temp->next->val == val) {
                ListNode* delnode = temp->next;
                temp->next = temp->next->next;
                delete delnode;
            } else {
                temp = temp->next;
            }
        }
        if (head->val == val) {
            ListNode* deleNode = head;
            head = head->next;
            delete deleNode;
        }
        return head;
    }
};