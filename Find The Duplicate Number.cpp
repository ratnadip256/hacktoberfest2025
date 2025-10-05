class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = -1;
        for(int i=0; i<nums.size(); i++) {
            int index = abs(nums[i]);

            // already visited?
            if(nums[index] < 0) {
                ans = index;
                break;
            }
            // mark that the number now visited.
             nums[index] = nums[index] * -1;
        }
        return ans;
    }
};
