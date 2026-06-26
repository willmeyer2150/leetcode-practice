#include <iostream>
#include <vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int temp = nums[i];
            if (nums[i] != 0) {
                nums[i] = nums[insertPos];
                nums[insertPos] = temp;
                insertPos++;
            }
        }
    }
};

void printVector(const std::vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }
}

int main() {
    Solution sol;

    std::vector<int> nums = {0,1,0,3,12};
    sol.moveZeroes(nums);

    printVector(nums);
}