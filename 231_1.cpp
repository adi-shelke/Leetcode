#include <iostream>
#include <math.h>
using namespace std;

class Solution
{

public:
    bool isPowerOfTwo(int x)
    {
        int temp = pow(2, 0);
        for (int i = 1; temp < x; i++)
        {
            temp = pow(2, i);
        }
        if (temp == x)
            return true;
        else
            return false;
    }
};
int main()
{

    Solution s;
    cout << s.isPowerOfTwo(22);
    return 0;
}
