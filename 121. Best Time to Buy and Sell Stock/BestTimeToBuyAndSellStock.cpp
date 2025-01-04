#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int maiorDiferenca = 0;

        for(int i = 0; i < (size - 1); i++){
            for(int j = i + 1; j < size; j++){
                if(prices[j] - prices[i] > maiorDiferenca){
                    maiorDiferenca = prices[j] - prices[i];
                }
            }
        }

        return maiorDiferenca;
    }
};

int main(){
    Solution solution = Solution();
    vector<int> prices = {7, 1, 5, 3, 6, 4}; 
    cout << solution.maxProfit(prices);

    return 0;
}