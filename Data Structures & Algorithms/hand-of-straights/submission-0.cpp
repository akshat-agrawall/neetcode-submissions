class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        if (hand.size() % groupSize != 0)
            return false;

        map<int, int> mp;

        for (int x : hand)
            mp[x]++;

        while (!mp.empty()) {

            int start = mp.begin()->first;

            for (int i = start; i < start + groupSize; i++) {

                if (mp.find(i) == mp.end())
                    return false;

                mp[i]--;

                if (mp[i] == 0)
                    mp.erase(i);
            }
        }

        return true;
    }
};