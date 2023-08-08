#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                ans.push_back(nums[i]);
        }
        return ans;
    }
};

int main()
{

    Solution s;
    vector<int> vect{1, 2, 3, 5, 1, 2, 5};
    vector<int> ans;
    ans = s.findDuplicates(vect);
    for (auto el : ans)
        cout << el << " ";
    return 0;
}