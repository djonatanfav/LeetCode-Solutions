#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> ranges = {};
        int i = 0;
        int size = nums.size();

        while (i < size) {
            int start = nums[i];
            while (i < size - 1 && nums[i] + 1 == nums[i + 1]) {
                i++;
            }
            if (start != nums[i]) {
                ranges.push_back(to_string(start) + "->" + to_string(nums[i]));
            } else {
                ranges.push_back(to_string(nums[i]));
            }
            i++;
        }

        return ranges;
    }
};

int main()
{
    Solution solution = Solution();
    // vector<int> sumary = {0, 2, 3, 4, 6, 8, 9};
    vector<int> sumary = {-1};
    vector<string> result = solution.summaryRanges(sumary);
    for (const auto &range : result)
    {
        cout << range << " ";
    }

    return 0;
}