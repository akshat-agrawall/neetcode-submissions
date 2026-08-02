/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
     unordered_map<Node*,Node*> mp;
    Node* clone(Node* node){
       
        if(mp.find(node) != mp.end())
        return mp[node];

        Node* cloneN = new Node(node->val);
        mp[node] = cloneN;
        for(Node* nbr: node->neighbors){
            cloneN->neighbors.push_back(clone(nbr));

        }
        return cloneN;

    }
    Node* cloneGraph(Node* node) {
        if(node == NULL)
        return NULL;
        return clone(node);
    }
};
