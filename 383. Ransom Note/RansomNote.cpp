#include <iostream>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int i;
        for (char c : ransomNote)
        {
            i = magazine.find(c);
            if (i != std::string::npos)
            {
                magazine.erase(i, 1);
            }
            else
            {
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