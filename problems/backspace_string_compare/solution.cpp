class Solution {
public:
    bool backspaceCompare(string S, string T) {
        S = determineString(S);
        T = determineString(T);
        if(S == T) {
            return true;
        } else {
            return false;
        }
    }
    
    string determineString(string sequence) {
        size_t pos = string::npos;
         while((pos = sequence.find("#")) != string::npos) {
            if(pos > 0) {
                sequence.erase(pos - 1, 2);
            } else {
                sequence.erase(pos, 1);
            }
        }
        return sequence;
    }

};