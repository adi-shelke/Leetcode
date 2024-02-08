#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    // 0 2 4 6 5 5 3 2! 1 0 0 0 0 0 0
    int peak(vector<int> arr, int start, int end)
    {
        int mid = (start + end) / 2;
        if ((arr[mid] >= arr[mid - 1] && arr[mid] > arr[mid + 1]))
        {
            return mid;
        }
        if ((arr[mid] < arr[mid - 1]) | (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1]))
        {
            return peak(arr, start, mid - 1);
        }
        if ((arr[mid] <= arr[mid + 1]))
        {
            return peak(arr, mid + 1, end);
        }
        else
            return -1;
    }
    int peakIndexInMountainArray(vector<int> &arr)
    {
        return peak(arr, 0, arr.size() - 1);
    }
};

int main()
{
    Solution s;
    // vector<int> arr = {0, 2, 4, 6, 6, 5, 3, 2, 1, 0, 0, 0, 0, 0, 0};
    // vector<int> arr = {0,2,1,0};
    vector<int> arr = {3,5,3,2,0};
    // 0, 2, 4, 6, 6, 5, 3
    // 6, 5, 3
    // 6, 5

    cout << s.peakIndexInMountainArray(arr);
}