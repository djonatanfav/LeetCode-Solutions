#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maiorLucro = 0;
        int menorValor = INT_MAX;

        for (int price : prices) {
            if (price < menorValor) {
                menorValor = price;
            }
            int profit = price - menorValor;
            if (profit > maiorLucro) {
                maiorLucro = profit;
            }
        }

        return maiorLucro;
    }
};

int main(){
    Solution solution = Solution();
    vector<int> prices = {7, 1, 5, 3, 6, 4}; 
    cout << solution.maxProfit(prices);

    return 0;
}