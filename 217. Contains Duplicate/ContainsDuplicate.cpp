#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int p = INT_MIN;

        for(int n : nums){
            if(n == p){
                return true;
            }
            p = n;
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