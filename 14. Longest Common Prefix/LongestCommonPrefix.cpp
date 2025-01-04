#include <vector>
#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int numeroDePalavras = strs.size();
        int menorTamanho = INT_MAX;
        string prefixo = "";

        for (string palavra : strs)
        {
            if (palavra.length() < menorTamanho)
            {
                menorTamanho = palavra.length();
            }
        }

        for (int i = 0; i < menorTamanho; i++)
        {
            for (string s : strs)
            {
                if (s[i] != strs[0][i])
                {
                    return prefixo;
                }
            }

            prefixo += strs[0][i];
        }

        return prefixo;
    }
};

int main()
{
    Solution solution = Solution();
    vector<string> palavras = {"flower", "flow", "flight"};
    cout << solution.longestCommonPrefix(palavras);

    return 0;
}