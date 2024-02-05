class Solution {
    int binarySearch(vector <int> arr,int start,int end, int target){
    int mid = start +(end-start)/2;
    if(start>end)
        return -1;
    if(arr[mid] == target)
        return mid;
    else if(arr[mid]>target)
        return binarySearch(arr,start,mid-1,target);
    else
        return binarySearch(arr,mid+1,end,target);
}

public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);
    }
};