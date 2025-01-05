#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int middle = left + (right - left) / 2;

            if(nums[middle] == target){
                return middle;
            } else if (nums[middle] > target){
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }

        return -1;
    }
};


int main() {

    Solution solution = Solution();

    vector<int> nums = {-1,0,3,5,9,12};
    int searchN = solution.search(nums, 9);

    cout << searchN << endl;

    return 0;
}