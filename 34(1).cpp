class Solution {
    int  FirstOccurences(vector<int> arr, int start, int end, int target)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (arr[mid] == target){
        int index = mid;
        int newIndex = FirstOccurences(arr, start, mid - 1, target);
        if(newIndex!=-1)
            return newIndex;
        else
            return index;
    }
    else if (arr[mid] > target)
        return FirstOccurences(arr, start, mid - 1, target);
    else
        return FirstOccurences(arr, mid + 1, end, target);
    return -1;
}


int  LastOccurences(vector<int> arr, int start, int end, int target)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (arr[mid] == target){
        int index = mid;
        int newIndex = LastOccurences(arr, mid+1, end, target);
        if(newIndex!=-1)
            return newIndex;
        else
            return index;
    }
    else if (arr[mid] > target)
        return LastOccurences(arr, start, mid - 1, target);
    else
        return LastOccurences(arr, mid + 1, end, target);
    return -1;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> indexes;
        indexes.push_back(FirstOccurences(nums,0,nums.size()-1,target));
        indexes.push_back(LastOccurences(nums,0,nums.size()-1,target));
        return indexes;
    }
};