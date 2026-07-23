class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxh(stones.begin(),stones.end());
        while(maxh.size() > 1){
            int first = maxh.top();
            maxh.pop();
            int sec = maxh.top();
            maxh.pop();
            if(first != sec){
                maxh.push(first-sec);
            }
        }
        return maxh.empty() ? 0: maxh.top();
    }
};
