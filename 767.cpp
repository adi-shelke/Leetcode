#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string reorganizeString(string s)
    {
        string ans = "";
        ans += s[0];
        string temp = "";
        int count = 0;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i - 1] == s[i])
                temp += s[i];
            else
                ans += s[i];
        }
        int tempSize = temp.length();
        sort(temp.begin(), temp.end());
        for (int i = 0; i < temp.length(); i++)
        {
            for (int j = 0; j <= ans.length() - 1; j++)
            {
                if (temp[i] == ans[j])
                    continue;
                if (j == ans.length() - 1)
                {
                    ans += temp[i];
                    count++;
                    break;
                }
                if (temp[i] != ans[j] && j == 0)
                {
                    ans.insert(0, 1, temp[i]);
                    count++;
                    break;
                }
                else
                {
                    if (temp[i] != ans[j] && temp[i] != ans[j - 1])
                    {
                        ans.insert(j, 1, temp[i]);
                        count++;
                    }
                }
            }
        }




        
        cout << ans << endl;
        cout << temp << endl;
        cout << count << endl;
        if (tempSize != count)
        {
            return "";
        }

        return ans;
    }
};
int main()
{
    Solution s;
    cout << s.reorganizeString("abbabbaaab");
}