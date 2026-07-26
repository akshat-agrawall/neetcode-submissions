class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL)
            return NULL;

        Node* temp = head;

        Node* newhead = new Node(temp->val);
        Node* pnt = newhead;

        temp = temp->next;

        while(temp){
            Node* nn = new Node(temp->val);
            pnt->next = nn;
            pnt = nn;
            temp = temp->next;
        }

        unordered_map<Node*, Node*> mp;

        temp = head;
        pnt = newhead;

        while(temp){
            mp[temp] = pnt;
            temp = temp->next;
            pnt = pnt->next;
        }

        temp = head;
        pnt = newhead;

        while(temp){
            pnt->random = mp[temp->random];
            temp = temp->next;
            pnt = pnt->next;
        }

        return newhead;
    }
};