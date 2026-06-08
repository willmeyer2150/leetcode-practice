#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int result = 0;
        int previousValue = 0;

        for (int i = s.size() - 1; i >= 0; --i) {
            char c = s[i];
            int value = mp[c];
            int currentValue = mp[s[i]];

            std::cout << "i = " << i
            << ", char = " << s[i]
            << ", value = " << mp[s[i]]
            << std::endl;
            std::cout << c << " has value " << value << std::endl;

            std::cout << currentValue << ", " << previousValue << std::endl;

            if (currentValue < previousValue) {
                result -= currentValue;
            } else {
                result += currentValue;
            }
            previousValue = currentValue;
        }
        return result;
    }
};

void printValue(int n) {
    std::cout << "The final value is " << n << std::endl;
}

int main() {
    Solution sol;

    std::string s;
    
    s = "MCMXCIV";

    printValue(sol.romanToInt(s));

}