class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.length();
        int l2 = s2.length();
        if(l1>l2)
        return false;
        int left=0,right=left+l1;
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(int i=0;i<l1;i++){
            mp[s1[i]]++;
            mp1[s2[i]]++;
        }
         if(mp == mp1)
            return true;
        for(right;right<l2;right++){
            if(mp == mp1)
            return true;

            mp1[s2[left]]--;
            if( mp1[s2[left]] == 0)
            mp1.erase(s2[left]);
            left++;

            mp1[s2[right]]++;

        }
        return mp1==mp;

    }
};
