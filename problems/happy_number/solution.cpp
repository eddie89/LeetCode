class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        std::set<int> unhappyNumbers;
        while(num != 1)
        {
            num = calcHappiness(num);
            bool is_in = unhappyNumbers.find(num) != unhappyNumbers.end();
            if(is_in){
                return false;
            } else {
                unhappyNumbers.insert(num);
            }
        }
    return true;    
    }
    
    int calcHappiness(int num) {
        std::vector<int> digitVector;
        std::vector<int> powerVector;
        if(num != 1) {
            digitVector = calcDigitVector(num);
            powerVector.clear();
            for(int digit : digitVector) {
                powerVector.push_back(pow(digit, 2));
            }
            num = 0;
            for(int powerDigit : powerVector) {
                num += powerDigit;
            }
        }
        return num;
    }

    vector<int> calcDigitVector(int n){
        std::vector<int> digitVector;
        while(n > 0){
            digitVector.push_back(n%10);
            n /= 10;
            
        }
        return digitVector;
     }
 };