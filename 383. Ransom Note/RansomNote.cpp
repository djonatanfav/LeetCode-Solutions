#include <iostream>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> map;
        for (char ch : magazine) {
            hashmap[ch]++;
        }

        for (char ch : ransomNote) {
            if (map[ch] > 0) {
                map[ch]--;
            } else {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution solution = Solution();
    cout << solution.canConstruct("aa", "aab");

    return 0;
}