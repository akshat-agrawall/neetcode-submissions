class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* forw = nullptr;

        while (curr != nullptr) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }

        return prev;
    }
};