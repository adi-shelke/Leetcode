#include <iostream>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.size()==0)
            return 0;
        int len = 0;
        int f = 0;
        int f2=0;
        long int i;
        for (i = 0; i < s.size() - 1; i++)
        {
            int temp = 0;
            if (f == 1)
                break;
            if ((s.size() - 1) - i <= len)
            {
                f = 1;
                break;
            }
            f2=0;
            long int j;
            for (j = i + 1; j < s.size(); j++)
            {
                if(f2==1)
                    break;
                for (int k = i; k < j; k++)
                {
                    if (s[k] != s[j])
                    {
                        temp++;
                    }
                    else
                    {
                        f2=1;
                        temp=0;
                        break;
                    }
                    len=max(len,temp);
                }
                temp=0;
            }
            len = max(len, temp);
        }
        return len+1;
    }
};
int main()
{
    Solution s;
    string st;
    // getline(cin,st);   Used to get the whole line as input including spaces.
    cin >> st;
    int len = s.lengthOfLongestSubstring(st);
    cout << len << endl;
    return 0;
}