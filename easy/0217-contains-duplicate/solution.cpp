#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
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

    std::vector<int> nums = {1, 2, 3, 1};

    return sol.containsDuplicate(nums);

    return 0;
}