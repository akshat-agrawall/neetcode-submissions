class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> maxh;
        for(int i=0;i<points.size();i++){
            int x = points[i][0];
            int y = points[i][1];
            int dis = x*x + y*y;
            maxh.push({dis,i});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        vector<vector<int>> result;
        while (!maxh.empty()) {
            result.push_back(points[maxh.top().second]);
            maxh.pop();

        }
        return result;

    }
};
