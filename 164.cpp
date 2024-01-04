#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
https://leetcode.com/problems/maximum-gap/description/
*/

int maximumGap(vector<int> &nums)
{
    if (nums.size() < 2)
        return 0;
    sort(nums.begin(), nums.end());
    if (nums.size() == 2)
        return nums[1] - nums[0];
    int max = nums[1] - nums[0];
    for (int i = 1; i < nums.size() - 1; i++)
    {
        if ((nums[i + 1] - nums[i]) > max)
            max = (nums[i + 1] - nums[i]);
    }
    return max;
}

int main()
{
    vector<int> nums{10};
    cout << maximumGap(nums);
    return 0;
}
