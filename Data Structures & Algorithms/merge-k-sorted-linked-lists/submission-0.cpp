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
    ListNode* merge(ListNode* a, ListNode* b){
    ListNode dummy(0);
    ListNode* tail = &dummy;
    while(a && b){
        if(a->val < b->val){
            tail->next = a;
            a = a->next;
        }
        else{
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }
    if(a) tail->next = a;
    else tail->next = b;
    return dummy.next;
}
  ListNode* solve(vector<ListNode*>& lists,int l,int r){

    if(l==r)
        return lists[l];

    int mid=(l+r)/2;

    ListNode* left=solve(lists,l,mid);
    ListNode* right=solve(lists,mid+1,r);

    return merge(left,right);
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        return NULL;

    return solve(lists,0,lists.size()-1);

    }
};
