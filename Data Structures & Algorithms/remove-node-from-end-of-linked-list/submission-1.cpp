class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      //The optimal solution uses two pointers (fast and slow) with a dummy node, achieving O(n) time in one traversal and naturally 
      // handling deletion of the head node without special cases.
      // However, if you're practicing the length-based approach,
       // the corrected code above is perfectly acceptable.
        int len = 0;
        ListNode* temp = head;

        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        // Delete head
        if(n == len){
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int pos = len - n - 1;
        temp = head;

        while(pos > 0){
            temp = temp->next;
            pos--;
        }

        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;

        return head;
    }
};