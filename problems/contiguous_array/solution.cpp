class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> first_occurence;
        first_occurence[0] = 0;
        int answer = 0;
        int pref = 0;
        for(int i = 0; i < nums.size(); i++) {
            pref += (nums[i] == 0 ? -1 : 1);
            auto iterator = first_occurence.find(pref);
            if(iterator != first_occurence.end()) {
                answer = max(answer, i + 1 - first_occurence[pref]);
            } else {
                first_occurence[pref] = i + 1;
            }
        }
        return answer;
    }
};