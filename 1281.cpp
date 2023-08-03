#include <iostream>
using namespace std;
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0;
        int product = 1;
        while (n > 0)
        {
            sum += n % 10;
            product *= n % 10;
            n = n / 10;
        }
        return product - sum;
    }
};
int main()
{
    Solution s;
    cout << s.subtractProductAndSum(4421);
    return 0;
}