#include <iostream>
#include <regex>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0){
            return false;
        }

        int j = 0;
        for(char c : t){
            if(c == s[j]){
                j++;
                if(j == s.size()){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Solution solution = Solution();
    cout << solution.isSubsequence("abc", "ahbgdc");

    return 0;
}