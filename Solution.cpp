class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int cnt = 0;
        for (int& x : nums) {
            cnt += (x % 2 == 0);
        }
        return cnt >= 2;
    }
};
