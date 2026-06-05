#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                ++k;
            } 
        }
        return k;
    }
};

void printVector(const std::vector<int>& nums) {
    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

int main() {

    Solution sol;

    std::vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    sol.removeElement(nums, val);

    printVector(nums);

}
