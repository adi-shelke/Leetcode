class Solution {
    bool isPalindrome(string str,int start,int end){
        if(start>=end)
            return true;
        if(str[start]!=str[end])
            return false;
        return isPalindrome(str,++start,--end);

    }
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        return isPalindrome(str,0,str.length()-1);
    }
};