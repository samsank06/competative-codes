#include<bits/stdc++.h>
using namespace std;

vector<int> FindDuplicates(vector<int> &nums, int n)
{
    unordered_map<int,int> ump;
    vector<int> res;
    for(int i=0;i<nums.size();i++)
    {
        ump[nums[i]]++;
    }
    cout<<"ump contains"<<endl;
    for(auto it:ump)
    {
        cout<<it.first<<"\t "<<it.second<<endl;
    }
    cout<<endl;

    cout<<"duplicates are"<<endl;
    for(auto it:ump)
    {
        if(it.second>1)
            res.push_back(it.first);
        
    }

    return res;
}

int main()
{
    vector<int> v{2,3,4,1,2,4,5,100,100,200,39,34,45,45,56,45,56,67,67};
   // int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> p= FindDuplicates(v, v.size());

    for(auto i:p)
        cout<<i<<endl;
}