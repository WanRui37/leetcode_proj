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
    
    // 测试用例1
    vector<int> nums1 = {0, 1, 0, 3, 12};
    cout << "原始数组: ";
    printVector(nums1);
    solution.moveZeroes(nums1);
    cout << " -> 移动零后: ";
    printVector(nums1);
    cout << endl;
    
    // 测试用例2
    vector<int> nums2 = {0};
    cout << "原始数组: ";
    printVector(nums2);
    solution.moveZeroes(nums2);
    cout << " -> 移动零后: ";
    printVector(nums2);
    cout << endl;

    return 0;
}