class Solution {
public:
    ListNode* reverseList(ListNode* head) {

       
        ListNode*next;
        ListNode*prev = NULL;
        ListNode*curr = head;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        // ListNode* temp = head;
        // ListNode* prev = NULL;

        // while (temp != NULL) {
        //     ListNode* front = temp->next;
        //     temp->next = prev;
        //     prev = temp;
        //     temp = front;
        // }
        // return prev;
    }
};