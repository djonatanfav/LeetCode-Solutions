class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int tamanhoArray = nums.size();
        int soma;

        for (int i = 0; i < tamanhoArray; i++)
        {
            for (int j = 0; j < tamanhoArray; j++)
            {
                if (j == i)
                {
                    continue;
                }
                soma = nums[i] + nums[j];
                if (soma == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};