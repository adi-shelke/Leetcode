#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;

        while (start < end)
        {
            if (nums[mid] >= nums[0])
                start = mid + 1;
            else
                end = mid;
            mid = start + (end - start) / 2;
        }
        if (nums[start] == target)
            return start;
        else if (target > nums[start] && target <= nums[nums.size() - 1])
        {
            end = nums.size() - 1;
            mid = start + (end - start) / 2;
            while (start <= end)
            {
                if (nums[mid] == target)
                    return mid;
                else if (target < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
                mid = start + (end - start) / 2;
            }
        }
        else
        {
            end = start - 1;
            start = 0;
            mid = start + (end - start) / 2;
            while (start <= end)
            {
                if (nums[mid] == target)
                    return mid;
                else if (target < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
                mid = start + (end - start) / 2;
            }
        }
        return -1;
    }
};
int main()
{

    Solution s;
    vector<int> vect{4, 5, 6, 7, 0, 1, 2};
    cout << s.search(vect, 3);
    return 0;
}