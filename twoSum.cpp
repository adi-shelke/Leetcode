#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    for(int i=0;i<=nums.size()-2;i++)
    {
        for(int j=i+1;j<=nums.size()-1;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
        
}
int main()
{
    vector<int> nums = {2,7,11,15};
    vector<int> res=twoSum(nums,17);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}