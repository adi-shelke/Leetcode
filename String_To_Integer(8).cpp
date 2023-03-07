#include<iostream>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
    int i=0;
    int signs=0;
    string num="";
    int f=0;
    int prev;
    int signNot=43;
    while (s[i]!='\0')
    {
        if(signs>1)
            return 0;
        if(int(s[i])==43 || int(s[i])==45){
            signs++;
            prev=int(s[i]);
            if(int(s[i])==45)
                signNot=45;
        }
        if(int(s[i])==32){
            if(prev!=65)
                prev=int(s[i]);
            i++;
            continue;
        }
        else if(int (s[i])>47 && int(s[i]<58)){
            if(prev==65)
                return 0;
            if(signs==1 && prev==32)
                return 0;
            prev=int(s[i]);
            num+=s[i];
            i++;
            while (int (s[i])>47 && int(s[i]<58))
            {
                num+=s[i];
                prev=int(s[i]);
                i++;
            }
            break;
        }
        else if(int(s[i]==45)){
            f=1;
            prev=int(s[i]);
        }
        // else if(int(s[i])>=65 && int(s[i])<=122)
        else if(int(s[i])!=43 && int(s[i])!=45)
            prev=65;
        i++;
    }
    if(num=="")
        return 0;
    if(stod(num)<-2147483648 || stod(num)>2147483647)
    {
        if(signNot==45){

            return INT_MIN;
        }
        else{
            return INT_MAX;
        }
    }
    int numb=stoi(num);
    if(f==1)
        return (-1*numb);
    else
        return numb;
    }
};

int main(){

    Solution s;
    string st;
    cin>>st;
    int num=s.myAtoi(st);
    cout<<num<<endl;
    return 0;
}