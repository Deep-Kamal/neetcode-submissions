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
    int trevel_front(ListNode* head){
        int length = 0;
        while(head != NULL){
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = trevel_front(head);

        if(n == l){
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }
        int trevel_front = l-n;
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(trevel_front--){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;

        delete(temp);
        return head;
    }
};
