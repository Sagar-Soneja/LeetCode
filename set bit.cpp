class Solution {
public:
    int hammingWeight(uint32_t n) {
        int t = __builtin_popcount(n) ;
        return t;
    }
};
