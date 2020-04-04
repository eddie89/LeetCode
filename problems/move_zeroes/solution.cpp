class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroCounter = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums.at(i) != 0) {
                nonZeroCounter++;
                if(i > nonZeroCounter) {
                    int temp = nums.at(nonZeroCounter);
                    nums.at(nonZeroCounter) = nums.at(i);
                    nums.at(i) = temp;
                }
               }
            }
        }
    };
    
