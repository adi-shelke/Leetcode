#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> sol;
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        int f = 0;
        while (start <= end)
        {
            if (nums[mid] == target)
            {
                f = 1;
                int temp = mid;
                if (mid - 1 < 0)
                    sol.push_back(mid);
                else
                {
                    while (nums[temp - 1] == target)
                    {
                        temp = temp - 1;
                        if (temp - 1 < 0)
                            break;
                    }
                    sol.push_back(temp);
                }
                if (mid + 1 > nums.size() - 1)
                    sol.push_back(mid);
                else
                {
                    temp = mid;
                    while (nums[temp + 1] == target)
                    {
                        temp = temp + 1;
                        if (temp + 1 > nums.size() - 1)
                            break;
                    }
                    sol.push_back(temp);
                }
                return sol;
            }
            else if (target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
            mid = (start + end) / 2;
        }
        if (f == 0)
            return vector<int>{-1, -1};
        return sol;
    }
};

int main()
{
    Solution s;
    vector<int> vect{1};
    int target = 1;
    vector<int> ans = s.searchRange(vect, target);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}