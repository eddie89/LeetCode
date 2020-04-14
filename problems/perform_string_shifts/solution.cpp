class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int amount = 0;
        for(vector<int> vec : shift) {
            if(vec[0] == 1) {
                amount -= vec[1];
            } else {
                amount += vec[1];
            }
        }
        if(amount < 0) {
            if(s.size() < abs(amount)){
                amount = -(abs(amount) % s.size());
              }
                int startShift = s.size() + amount;
                string toShift = s.substr(startShift, s.size() - 1);
                s.erase(startShift, s.size() - 1);
                s = toShift.append(s);
        } else {
            if(amount  > s.size()) {
                amount = amount % s.size();
            }
                string toShift = s.substr(0, amount);
                s.erase(0, amount);
                s.append(toShift);
             }
        return s;
    }
};