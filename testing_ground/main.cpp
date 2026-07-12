#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        
        while (l < r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid;
            }
        }
        return l;
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

    std::vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    std::cout << sol.searchInsert(nums, target) << std::endl;

    return 0;
}