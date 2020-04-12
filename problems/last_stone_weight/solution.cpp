class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(), stones.end());
        sort(stones.begin(), stones.end(), greater<>());
        if(stones.size() > 1) {
            while(stones.size() > 1) {
                int element = stones.at(0) - stones.at(1); 
                pop_heap(stones.begin(), stones.end());
                stones.pop_back();
                pop_heap(stones.begin(), stones.end());
                stones.pop_back();
                if(element > 0) {
                    stones.push_back(element);
                } 
                if(stones.size() > 0) {
                    sort(stones.begin(), stones.end(), std::greater<>());
                } else {
                    return 0;
                }
            }
            return stones.at(0);
        } else {
            return stones.at(0);
        }
    }
};