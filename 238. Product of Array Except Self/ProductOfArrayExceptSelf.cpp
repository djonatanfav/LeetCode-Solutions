#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int s = nums.size();
        vector<int> result(s);
        vector<int> l(s);
        vector<int> r(s);

        for(int i = 0; i < s; i++){
            if(i == 0){
                l[i] = 1;
            } else {
                l[i] = l[i-1] * nums[i-1];
            }
        }

        for(int i = s-1; i >= 0; i--){
            if(i == s-1){
                r[i] = 1;
            } else {
                r[i] = r[i+1] * nums[i+1];
            }
        }

        for(int i = 0; i < s; i++){
            result[i] = l[i] * r[i];
        }

        return result;
    }
};

int main()
{
    Solution solution = Solution();
    // vector<int> sumary = {0, 2, 3, 4, 6, 8, 9};
    vector<int> numbers = {1,2,3,4};
    vector<int> result = solution.productExceptSelf(numbers);
    for (int range : result)
    {
        cout << range << " ";
    }

    return 0;
}