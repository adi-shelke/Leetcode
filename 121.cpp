#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solution(vector <int> vect){
        int leastValue = vect[0];
        int maxProfit=0;
        int currentProfit=0;
        for(int i=0;i<vect.size();i++)
        {
            if(vect[i]<leastValue)
                leastValue=vect[i];
            currentProfit=vect[i]-leastValue;
            if(currentProfit>maxProfit)
                maxProfit=currentProfit;
        }
        return maxProfit;
    }
};
int main(){
    Solution s;
    vector <int> vect {7,6,4,3,1};
    int sol=s.solution(vect);
    cout<<sol;
}