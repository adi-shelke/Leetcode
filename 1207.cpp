#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int i = 0;
        while (i < arr.size())
        {
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                    count++;
                else
                    break;
            }
            ans.push_back(count);
            i += count;
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] == ans[i + 1])
                return false;
        }
        return true;
    }
};
int main()
{

    Solution s;
    vector<int> vect{1, 2, 2, 1, 1, 3};
    cout << s.uniqueOccurrences(vect);
}