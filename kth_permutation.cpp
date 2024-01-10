#include<bits/stdc++.h>
using namespace std;

string findPermutation(int n,int k)
{
    int fact = 1;
    vector<int> nums;
    for(int i=1;i<n;i++)
    {
        fact = fact*i;
        nums.push_back(i);
    }
    nums.push_back(n);
    k = k-1;
    string s = "";
    while(true)
    {
        
        s = s + to_string(nums[k/fact]) + " ";
        nums.erase(nums.begin() + k/fact);
        if(nums.size() == 0)
        {
            break;
        }
        k = k % fact;
        fact = fact/nums.size();

    }
    return s;
}

int main()
{
    int n = 4, k = 17;
    //1,2,3,4 ans = 3,4,1,2,
    cout<<findPermutation(n,k);
}