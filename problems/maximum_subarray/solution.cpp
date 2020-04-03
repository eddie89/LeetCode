class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums.at(0);
        int temporarySum = nums.at(0);
        for(int i = 1; i < nums.size(); i++) {
            if(nums.at(i) > temporarySum && temporarySum < 0) {
                temporarySum = nums.at(i);
                if(temporarySum > sum) {
                    sum = temporarySum;
                }
            } else if(nums.at(i) > -1){
                temporarySum += nums.at(i);
                if(temporarySum > sum) {
                    sum = temporarySum;
                }
            } else {
            temporarySum += nums.at(i);
            if(temporarySum > sum) {
                    sum = temporarySum;
              }
            }
         }      
        return sum;
    }
};