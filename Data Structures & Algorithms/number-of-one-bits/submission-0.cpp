class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
    while (n) {
        count += (n & 1);  // check LSB
        n >>= 1;           // shift right
    }
    return count;

    }
};
