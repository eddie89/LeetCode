class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int frequency = 0;
        int sum = 0;
        map<int, int> sumMap;
        sumMap[0]++;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int num = sum - k;
            frequency += sumMap[num];
            sumMap[sum]++;
        }
        return frequency;
    }
};