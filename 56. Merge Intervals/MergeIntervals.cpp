#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        int s = intervals.size();
        vector<vector<int>> range = {};

        for (const vector<int> interval : intervals){
            if (range.empty() || range.back()[1] < interval[0]) {
                range.push_back(interval);
            } else {
                // There is overlap, merge the intervals
                range.back()[1] = max(range.back()[1], interval[1]);
            }
        }

        return range;
    }
};

int main()
{
    Solution solution = Solution();
    // vector<int> sumary = {0, 2, 3, 4, 6, 8, 9};
    vector<vector<int>> sumary = {{1,3},{2,6},{8,10},{15,18}}; // 
    vector<vector<int>> result = solution.merge(sumary);
    for (const auto& range : result) {
        cout << "[" << range[0] << ", " << range[1] << "] ";
    }
    cout << endl;

    return 0;
}