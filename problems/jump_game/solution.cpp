class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumpSize = nums[0];
        if(nums.size() == 1) {
            return true;
        }
        bool endIsReachable = false;
        for(int i = 0; i < nums.size(); i++) {
            if(jumpSize <= 1 && nums[i] == 0 && i < nums.size() - 1) {
                return false;
            }
            if(jumpSize + i - 1 >= nums.size() - 1) {
                return true;
            } else {
                jumpSize--; 
            }
            if(jumpSize < nums[i]) {
                jumpSize = nums[i];   
            }
        }
        return endIsReachable;
    }
};