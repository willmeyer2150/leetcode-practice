#include <iostream>
#include <vector>


class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        nums1.resize(m+n);
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                --i;
            }
            else {
                nums1[k] = nums2[j];
                --j;
            }
            --k;
        }
    }
};

void printVector(const std::vector<int>& nums) {
    for (int n : nums)
        std::cout << n << " ";
    std::cout << std::endl;
}

int main() {
    Solution sol;

    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};

    sol.merge(nums1, 3, nums2, 3);

    printVector(nums1);
}