class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        short w1 = 0;
        short w2 = 0;
        string saida = "";

        while (w1 < word1.size() || w2 < word2.size())
        {
            if (w1 < word1.size())
            {
                saida.append(string(1, word1[w1]));
            }

            if (w2 < word2.size())
            {
                saida.append(string(1, word2[w2]));
            }

            w1 += 1;
            w2 += 1;
        }

        return saida;
    }
};