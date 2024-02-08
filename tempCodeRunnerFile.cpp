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