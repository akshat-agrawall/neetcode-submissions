class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0,total=0;;
        int diff;
        int tank=0;
        for(int i=0;i<gas.size();i++){
            diff = gas[i]-cost[i];
            tank+=diff;
            total += diff;
            if (tank<0) {
                start = i+1; 
                tank=0;
            }

        }
        if(total<0)
            return -1;
            return start;
    }
};
