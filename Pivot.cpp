#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (start >= end)
        return start;
    if (nums[mid ]>= nums[0])
        return pivotIndex(nums, mid + 1, end);
    else
        return pivotIndex(nums, start, mid);
}

int main()
{
    vector<int> nums = {4, 5, 6, 0, 0, 1, 2};
    cout<<"The pivot index is: "<<pivotIndex(nums, 0, nums.size()-1)<<endl; // Output: "4
    return 0;
}