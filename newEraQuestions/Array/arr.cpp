
// Best time to Buy and Sell Stocks
class Solution
{
public:
    int maxProfit(vector<int> &nums)
    {
        int min_Value = INT_MAX; // track lowest price so far
        int maxProfit = 0;       // track max profit so far

        for (int i = 0; i < nums.size(); i++)
        {
            if (min_Value > nums[i])
            {
                min_Value = nums[i]; // update minimum if we find a new lower price
            }
            else if (maxProfit < nums[i] - min_Value)
            {
                maxProfit = nums[i] - min_Value; // update profit if selling today is better
            }
        }

        return maxProfit;
    }
};

#include <iostream>
#include <vector>
using namespace std;
vector<int> TwoSum(vector<int> &num, int target)
{
    vector<int> vec1(2);
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i + 1; j < num.size(); j++)
        {
            if (num[i] + num[j] == target)
            {
                vec1[0] = num[i];
                vec1[1] = num[j];
            }
        }
    }
    return vec1;
}
int main()
{
    vector<int> num = {3, 2, 4};
    vector<int> res = TwoSum(num, 6);
    for (auto item : res)
    {
        cout << item << " ";
    }
    return 0;
}
