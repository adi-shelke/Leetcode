#include <iostream>
using namespace std;
class Solution
{
public:
    int a = 0;
    int reverse(int x)
    {
        while (x != 0)
        {
            if ((a < INT_MIN / 10) || (a > INT_MAX / 10))
                return 0;
            a = 10 * a + (x % 10);
            x = x / 10;
        }
        return a;
    }
};
int main()
{
    Solution s;
    cout << s.reverse(-123);
    return 0;
}