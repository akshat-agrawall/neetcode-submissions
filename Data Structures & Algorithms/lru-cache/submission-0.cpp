class Node{
public:
    int key, val;
    Node *prev, *next;

    Node(int k, int v){
        key = k;
        val = v;
        prev = next = NULL;
    }
};

class LRUCache {
public:
    int cap;
    unordered_map<int, Node*> mp;
    Node *head, *tail;

    LRUCache(int capacity) {
        cap = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    // Remove a node from the list
    void remove(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    // Insert node before tail (Most Recently Used)
    void insert(Node* node){
        node->prev = tail->prev;
        node->next = tail;

        tail->prev->next = node;
        tail->prev = node;
    }

    int get(int key) {

        if(mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];

        remove(node);
        insert(node);

        return node->val;
    }

    void put(int key, int value) {

        // Key already exists
        if(mp.find(key) != mp.end()){

            Node* node = mp[key];
            node->val = value;

            remove(node);
            insert(node);

            return;
        }

        // Cache full
        if(mp.size() == cap){

            Node* lru = head->next;

            remove(lru);
            mp.erase(lru->key);
            delete lru;
        }

        Node* node = new Node(key, value);

        insert(node);
        mp[key] = node;
    }
};