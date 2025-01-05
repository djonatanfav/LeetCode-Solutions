#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int x = matrix.size();
        int y = matrix[0].size();
        int i = 0;
        char d = 'R';
        vector<int> p = {0, -1};
        vector<int> spiralOrder = {};
        unordered_map<char, int> m = {{'L', 0}, {'T', 0}, {'R', y}, {'B', x}};

        while (i < (x*y))
        {
            switch (d)
            {
            case 'T':
                if(p[0] - 1 < m['T']){
                    m['L'] = m['L'] + 1;
                    d = 'R';
                    continue;
                }
                p = {p[0]-1, p[1]};
                i++;
                spiralOrder.push_back(matrix[p[0]][p[1]]);
                break;
            case 'R':
                if(p[1] + 1 >= m['R']){
                    m['T'] = m['T'] + 1;
                    d = 'B';
                    continue;
                }
                p = {p[0], p[1]+1};
                i++;
                spiralOrder.push_back(matrix[p[0]][p[1]]);
                break;
            case 'B':
                if(p[0] + 1 >= m['B']){
                    m['R'] = m['R'] - 1;
                    d = 'L';
                    continue;
                }
                p = {p[0]+1, p[1]};
                i++;
                spiralOrder.push_back(matrix[p[0]][p[1]]);
                break;
            case 'L':
                if(p[1] - 1 < m['L']){
                    m['B'] = m['B'] - 1;
                    d = 'T';
                    continue;
                }
                p = {p[0], p[1]-1};
                i++;
                spiralOrder.push_back(matrix[p[0]][p[1]]);
                break;
            }
        }
        
        return spiralOrder;
    }
};

int main()
{
    Solution solution = Solution();
    // vector<int> sumary = {0, 2, 3, 4, 6, 8, 9};
    // vector<vector<int>> sumary = {{1,2,3},{4,5,6},{7,8,9}}; // 
    vector<vector<int>> sumary = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}; // spiralOrder.push_back(matrix[p[0]][p[1]]);

    vector<int> result = solution.spiralOrder(sumary);
    for (const auto &range : result)
    {
        cout << range << " ";
    }

    cout << endl;

    return 0;
}