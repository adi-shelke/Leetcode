class Solution {
public:
    int peak(vector<int> arr, int start, int end)
    {
        if(start>=end)
            return start;
        int mid = start+(end-start)/2;
        if(arr[mid]<arr[mid+1])
            return peak(arr,mid+1,end);
        else
            return peak(arr,start,mid);
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return peak (arr,0,arr.size()-1);
        }
};