#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        
    }
};

void printProfit(int profit) {
    std::cout << "Your profit is " << profit << std::endl;
}

int main() {
    Solution sol;

    std::vector<int> prices = {7,1,5,3,6,4};

    int profit = sol.maxProfit(prices);

    printProfit(profit);
}