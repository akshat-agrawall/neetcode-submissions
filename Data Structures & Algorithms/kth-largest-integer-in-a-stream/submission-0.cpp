class KthLargest {
    priority_queue<int,vector<int>,greater<int>> minheap;
    int k=0;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int n: nums)
        add(n);
    }
    
    int add(int val) {
        minheap.push(val);
        if(minheap.size()>k)
        minheap.pop();
        return minheap.top();
    }
     
};
