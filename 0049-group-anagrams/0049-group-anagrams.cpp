class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> cabinet;
        for(string s:strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            cabinet[temp].push_back(s);
        }
        vector<vector<string>> res;
        for(auto const& [label,stringy] : cabinet){
            res.push_back(stringy);
        }
        return res;
    }
};