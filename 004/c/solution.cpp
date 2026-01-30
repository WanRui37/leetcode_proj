#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), left = 0, right = 0;
        while (right < n) {
            if (nums[right]) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
};

// 打印数组的函数
void printVector(const vector<int>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}

int main() {
    Solution solution;
    
    // 测试用例数组
    vector<vector<int>> testCases = {
        {100, 4, 200, 1, 3, 2},      // 期望结果: 4 (1,2,3,4)
        {0, 3, 7, 2, 5, 8, 4, 6, 0, 1}, // 期望结果: 9 (0,1,2,3,4,5,6,7,8)
        {1, 0, 1, 2},                 // 期望结果: 3 (0,1,2)
        {},                           // 空数组
        {1},                          // 单个元素
        {1, 3, 5},                    // 没有连续序列
        {1, 2, 0, 1}                  // 有重复元素
    };
    
    vector<int> expected = {4, 9, 3, 0, 1, 1, 3};
    
    cout << "测试最长连续序列算法:" << endl;
    cout << "====================" << endl;
    
    for (int i = 0; i < testCases.size(); ++i) {
        int result = solution.longestConsecutive(testCases[i]);
        
        cout << "测试用例 " << i + 1 << ": ";
        printVector(testCases[i]);
        cout << endl;
        cout << "期望结果: " << expected[i] << ", 实际结果: " << result;
        
        if (result == expected[i]) {
            cout << " ✓ 通过" << endl;
        } else {
            cout << " ✗ 失败" << endl;
        }
        cout << endl;
    }
    
    return 0;
}