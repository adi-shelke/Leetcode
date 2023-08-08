#include <iostream>
using namespace std;
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int m = n;
        int mask = 0;
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        return (~n) & mask;
    }
};
int main()
{
    Solution s;
    cout << s.bitwiseComplement(5);
    return 0;
}