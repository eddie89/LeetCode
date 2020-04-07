class Solution {
public:
    int countElements(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> comparableArr(arr.begin(), arr.end());
        comparableArr.erase(unique(comparableArr.begin(), comparableArr.end()), comparableArr.end());
        //set<int> numberSet(arr.begin(),arr.end());
        int counter = 0;
        for(int i = 0; i < comparableArr.size(); i++) {
            comparableArr.at(i);
            if(i < comparableArr.size() - 1){
                if(comparableArr.at(i) + 1 == comparableArr.at(i + 1)) {
                    counter += count(arr.begin(), arr.end(), comparableArr.at(i));
                }
            }
        }
        return counter;
    }
};