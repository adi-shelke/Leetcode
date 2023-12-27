#include <iostream>
#include <cctype>
using namespace std;

string rev(string word)
{
    int start = 0;
    int end = word.length() - 1;
    while (start <= end)
    {
        swap(word[start], word[end]);
        start++;
        end--;
    }
    return word;
}
string reverseWords(string sentence)
{
    string word = "";
    string ans = "";
    int i = 0;
    int end = sentence.length();
    for (i; i < end; i++)
    {
        cout << "Character is:- " << sentence[i] << endl;
        if (!isspace(sentence[i]) && sentence[i] != '\0')
            word.push_back(sentence[i]);
        else
        {
            ans.append(rev(word));
            ans.append(" ");
            cout << "Answer:- " << ans << endl;
            word = "";
        }
    }
    ans.append(rev(word));
    return ans;
}
int main()
{
    string sentence = "A";
    cout << reverseWords(sentence);
    return 0;
}