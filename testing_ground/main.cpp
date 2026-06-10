#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int lowestPrice = prices[0];
        int maxProfit = 0;

        for (size_t i = 1; i < prices.size(); ++i) {
            if (prices[i] < lowestPrice) {
                lowestPrice = prices[i];
                std::cout << "Lowest price: " << lowestPrice << std::endl;
            }
            else if ((prices[i] - lowestPrice) > maxProfit) {
                maxProfit = prices[i] - lowestPrice;
                std::cout << "Max profit: " << maxProfit << std::endl;
            }
        }
        return maxProfit;
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