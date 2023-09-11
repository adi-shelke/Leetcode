#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int len = nums.size();
        int j = 0;
        while (j < k)
        {
            int temp = nums[len-1];
            for (int i = len-1; i >0; i--)
            {
                nums[i] = nums[i - 1];
            }
            nums[0] = temp;
            j++;
        }
    }
};

int main()
{
    Solution s;
    vector<int> vect{1, 2, 3, 4, 5, 6, 7};
    s.rotate(vect, 3);
    for (auto i : vect)
        cout << i << " ";
}