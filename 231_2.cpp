#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int x)
    {
        for (int i = 0; i < 30; i++)
        {
            int ans = pow(2, i);
            if (ans == x)
                return true;
        }
        return false;
    }
};
int main()
{
    Solution s;
    cout << s.isPowerOfTwo(12);
    return 0;
}