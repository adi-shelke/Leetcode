#include<iostream>
using namespace std;
class Solution{
    public:
    int solution(int x){
        return x*x;
    }
};

int main(){
    Solution s;
    int sol=s.solution(5);
    cout<<sol;
}