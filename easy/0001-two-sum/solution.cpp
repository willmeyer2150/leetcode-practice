#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> solution;
        int n = nums.size() - 1;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    solution = {i, j};
                }
            }
        }
    }
};

template <typename T>

void printVector(const vector<T>& vec) {
    for (const auto& item : vec) {
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    Solution sol;

    std::vector<int> nums = {2,7,11,15};

    sol.twoSum(nums, 9);

    printVector(nums);

    return 0;
}