#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class BFSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> solution;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    solution = {i, j};
                    return solution;
                }
            }
        }
        return {};
    }
};

class OPSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;
        int n = nums.size();
        int needed = 0;

        for (int i = 0; i < n; ++i) {
            needed = target - nums[i];
            
            if (seen.find(needed) != seen.end()) {
                return {seen[needed], i};
            }
            seen[nums[i]] = i;
        }
        return {};
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
    OPSolution sol;

    std::vector<int> nums = {2,7,11,15};

    std::vector<int> answer = sol.twoSum(nums, 9);

    printVector(answer);

    return 0;
}