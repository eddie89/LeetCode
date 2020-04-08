class Solution {
public:
    int singleNumber(vector<int>& nums) { 
        int x = 0;
        for(int num : nums) {
            cout<<"Before X "<<x<<" Num: "<<num<<endl;
            x ^= num;
            cout<<"After X "<<x<<" Num: "<<num<<endl;
        }
        return x;
        //for(int i = 0; i < nums.size(); i++) {
        //    if(count(nums.begin(), nums.end(), nums.at(i)) == 1) {
        //        return nums.at(i);
        //    }
        //}   
        //return -1;
    }
};