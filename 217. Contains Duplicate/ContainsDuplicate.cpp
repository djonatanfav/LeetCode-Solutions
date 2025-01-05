#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> lista;

        for (int num : nums) {
            if (lista.find(num) != lista.end()) {
                return true;
            }
            lista.insert(num);
        }
        return false;

    }
};

int main()
{
    Solution solution = Solution();
    vector<int> sumary = {0, 2, 3, 4, 6, 2, 8, 9};
    // vector<int> sumary = {-1};
    bool result = solution.containsDuplicate(sumary);
    
    cout << result;

    return 0;
}