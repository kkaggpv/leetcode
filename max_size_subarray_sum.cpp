
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, end = 0, sum = 0, min_subarray = INT_MAX;
        while(end < nums.size()) {
            sum += nums[end];
            while(sum >= target) {
                min_subarray = min(min_subarray, end - start + 1);
                sum -= nums[start];
                start += 1;
            }
            end += 1;
        }
        return min_subarray == INT_MAX ? -1 : min_subarray;
    }
};
