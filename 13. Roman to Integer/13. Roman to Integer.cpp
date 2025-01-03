class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> d = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int size = s.size();
        int i = 0;
        int sum = 0;

        while (i < size)
        {
            if (i < size - 1 && d[s[i]] < d[s[i + 1]])
            {
                sum += d[s[i + 1]] - d[s[i]];
                i += 2;
            }
            else
            {
                sum += d[s[i]];
                i++;
            }
        }

        return sum;
    }
};