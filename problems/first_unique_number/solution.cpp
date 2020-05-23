class FirstUnique {
public:
    queue<int> numQueue; 
    map<int, int> occurenceMap;
    
    FirstUnique(vector<int>& nums) {
        for(int num : nums) {
            occurenceMap[num]++;
            numQueue.push(num);
        }
    }
    
    int showFirstUnique() {
        while(!numQueue.empty() && occurenceMap[numQueue.front()] >= 2) {
            numQueue.pop();
        }
        if(!numQueue.empty()) {
            return numQueue.front();
        } else {
            return -1;
        }
    }
    
    void add(int value) {
        occurenceMap[value]++;
        numQueue.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */