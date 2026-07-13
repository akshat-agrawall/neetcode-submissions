class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(char ch: s)
        mp[ch]++;
        for(char ch: t)
        mp1[ch]++;
        if(mp == mp1)
        return true;
        else
        return false;
    }
};
