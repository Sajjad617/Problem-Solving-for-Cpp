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
    void insert_tail(ListNode *&head, ListNode *&tail, int val){
        ListNode *NewNode = new ListNode(val);
        if(head == NULL){
            head = NewNode;
            tail = NewNode;
            return;
        }
        tail->next = NewNode;
        tail = NewNode;
        
    }
    void reverse(ListNode *&head, ListNode *cur){
        if(cur->next == NULL){
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;

    }
    void print(ListNode *head1, ListNode* head2){
        ListNode *temp = head1;
        while(temp != NULL){
            cout << temp->val << " " << head2->val << endl;
            temp = temp->next;
            head2 = head2->next;
        }
    }
    bool isPalindrome(ListNode* head) {
        ListNode *NewHead = NULL;
        ListNode *tail = NULL;
        ListNode *temp = head;
        while(temp != NULL){
            insert_tail(NewHead, tail, temp->val);
            temp = temp->next;
        }
        reverse(NewHead, NewHead);
        print(head, NewHead);
        temp = head;
        ListNode *temp2 = NewHead;
        
        while(temp !=  NULL){
            if(temp->val != temp2->val){
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};