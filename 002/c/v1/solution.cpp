#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string& str: strs) {
            string key = str;
            sort(key.begin(), key.end());
            mp[key].emplace_back(str);
        }
        vector<vector<string>> ans;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            ans.emplace_back(it->second);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    // 测试用例1: ["eat","tea","tan","ate","nat","bat"]
    vector<string> strs1 = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result1 = solution.groupAnagrams(strs1);
    cout << "测试用例1: [\"eat\",\"tea\",\"tan\",\"ate\",\"nat\",\"bat\"]" << endl;
    cout << "结果: ";
    for (const auto& group : result1) {
        cout << "[";
        for (size_t i = 0; i < group.size(); ++i) {
            cout << "\"" << group[i] << "\"";
            if (i < group.size() - 1) cout << ",";
        }
        cout << "] ";
    }
    cout << endl << endl;
    
    // 测试用例2: [""]
    vector<string> strs2 = {""};
    vector<vector<string>> result2 = solution.groupAnagrams(strs2);
    cout << "测试用例2: [\"\"]" << endl;
    cout << "结果: ";
    for (const auto& group : result2) {
        cout << "[";
        for (size_t i = 0; i < group.size(); ++i) {
            cout << "\"" << group[i] << "\"";
            if (i < group.size() - 1) cout << ",";
        }
        cout << "] ";
    }
    cout << endl << endl;
    
    // 测试用例3: ["a"]
    vector<string> strs3 = {"a"};
    vector<vector<string>> result3 = solution.groupAnagrams(strs3);
    cout << "测试用例3: [\"a\"]" << endl;
    cout << "结果: ";
    for (const auto& group : result3) {
        cout << "[";
        for (size_t i = 0; i < group.size(); ++i) {
            cout << "\"" << group[i] << "\"";
            if (i < group.size() - 1) cout << ",";
        }
        cout << "] ";
    }
    cout << endl;
    
    return 0;
}