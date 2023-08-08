#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
            return 1;
        if (n % 2 != 0)
            return false;
        double a = n;
        while (a != 2)
        {
            if (a < 2)
                return false;
            a = a / 2;
        }
        if (a == 2)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution s;
    cout << s.isPowerOfTwo(1);
    return 0;
}