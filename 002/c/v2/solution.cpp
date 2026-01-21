#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
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
    
    // 测试用例1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    
    cout << "测试用例1:" << endl;
    cout << "数组: ";
    printVector(nums1);
    cout << ", 目标值: " << target1 << endl;
    cout << "结果: ";
    printVector(result1);
    cout << endl << endl;
    
    // 测试用例2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    
    cout << "测试用例2:" << endl;
    cout << "数组: ";
    printVector(nums2);
    cout << ", 目标值: " << target2 << endl;
    cout << "结果: ";
    printVector(result2);
    cout << endl << endl;
    
    // 测试用例3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = solution.twoSum(nums3, target3);
    
    cout << "测试用例3:" << endl;
    cout << "数组: ";
    printVector(nums3);
    cout << ", 目标值: " << target3 << endl;
    cout << "结果: ";
    printVector(result3);
    cout << endl << endl;
    
    // 测试用例4（无解的情况）
    vector<int> nums4 = {1, 2, 3, 4};
    int target4 = 10;
    vector<int> result4 = solution.twoSum(nums4, target4);
    
    cout << "测试用例4（无解）:" << endl;
    cout << "数组: ";
    printVector(nums4);
    cout << ", 目标值: " << target4 << endl;
    cout << "结果: ";
    printVector(result4);
    if (result4.empty()) {
        cout << " (无解)";
    }
    cout << endl;
    
    return 0;
}