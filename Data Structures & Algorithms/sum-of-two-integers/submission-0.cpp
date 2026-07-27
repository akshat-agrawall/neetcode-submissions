class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned carry = (unsigned)(a & b) << 1;  // use unsigned to avoid UB
            a = a ^ b;     // sum without carry
            b = carry;     // carry becomes new b
        }
        return a;
    }
};
