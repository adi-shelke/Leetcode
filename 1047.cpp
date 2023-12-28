#include <iostream>
using namespace std;
int main()
{

    string str = "aababaab"; // babaab babb
    int done = 0;
    int i=0;
    while (!done && str.length()!=0)
    {
        int len = str.length();
        for (i = 0; i < str.length() - 1; i++)
            if (str[i] == str[i + 1]){
                str.erase(i, 2);
                break;
            }
        if(i==len-1)
            done = 1;
    }
    cout<<str;
    return 0;
}