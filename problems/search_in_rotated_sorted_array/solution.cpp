class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);
        int index = distance(nums.begin(), it);
        if(index == nums.size()) {
            return -1;
        }
        return index;
    }
};