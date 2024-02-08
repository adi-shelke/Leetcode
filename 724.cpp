class Solution {
    int sum(vector<int> &arr, int index)
{
    int sum =0;
    for(auto num:arr)
        sum+=num;
    return sum;
}
int pivot(vector<int> &arr, int leftSum, int rightSum, int index)
{
    if(arr.size() == 1)
        return 0;
    if (index == arr.size())
        return -1;
    rightSum -= arr[index];
    if (leftSum == rightSum)
        return index;
    leftSum += arr[index];
    return pivot(arr, leftSum, rightSum, index + 1);
}
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum = sum(nums, 0);
        int leftSum = 0;
        return pivot(nums, leftSum, rightSum, 0);
    }
};