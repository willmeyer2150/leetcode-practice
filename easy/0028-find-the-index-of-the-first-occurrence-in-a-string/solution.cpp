#include <iostream>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
    
    for (int i = 0; i < haystack.size(); ++i) {
        bool match = true;

        for (int j = 0; j < needle.size(); ++j) {
            if (haystack[i + j] != needle[j]) {
                match = false;
                break;
            }
        }
        if (match == true) {
            return i;
        }
    }
    return -1;
    }
};

int main() {
    Solution sol;

    std::string haystack = "sadbutsad";
    std::string needle = "sad";

    int result = sol.strStr(haystack, needle);

    std::cout << result << std::endl;
}