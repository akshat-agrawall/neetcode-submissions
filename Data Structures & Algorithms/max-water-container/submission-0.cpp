class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st=0,en=heights.size()-1;
        int area =0;
        while(st<en){
            int len = en - st;
            int bre = min(heights[en],heights[st]);
            area = max(area,len*bre);
            if(heights[en] < heights[st])
            en--;
            else
            st++;
        }
        return area;
    }
};
