class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        map<string, vector<string>> anagramMap;
        for(string str : strs) {
            string keyStr = str;
            sort(keyStr.begin(), keyStr.end());
            if(anagramMap.find(keyStr) != anagramMap.end()) {
                anagramMap[keyStr].push_back(str);
            } else {
                vector<string> anagramBucket;
                anagramBucket.push_back(str);
                anagramMap.insert(pair<string, vector<string>>(keyStr, anagramBucket));
            }
        }
        for(pair<string, vector<string>> element : anagramMap) {
            anagrams.push_back(element.second);
        }
        return anagrams;
    };
};