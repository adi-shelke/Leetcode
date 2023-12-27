#include <iostream>
using namespace std;

char getMaxOccuringChar(string str)
{
    int arr[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
            number = ch - 'a';
        else
            number = ch - 'A';
        arr[number]++;
    }

    int max = -1, index = 0;
    for (int i = 0; i < 26; i++)
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    return 'a' + index;
}
int main()
{
    string str = "testggggggsample";
    cout << getMaxOccuringChar(str);
    return 0;
}