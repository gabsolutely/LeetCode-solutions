class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) {
            total += x;
        }

        long long left_sum = 0;
        for (int i = 0; i < (int)nums.size(); i++) {
            long long right_sum = total - left_sum - nums[i];
            if (left_sum == right_sum) {
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }
};