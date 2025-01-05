#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int r = 0;
        
        for(char c : stones){
            if(jewelSet.count(c)){
                r++;
            }
        }

        return r;
    }
};

int main(){
    Solution solution = Solution();

    cout << solution.numJewelsInStones("aA", "aAAbbbb");

    return 0;
}