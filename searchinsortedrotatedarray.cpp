
#include<bits/stdc++.h>
using namespace std;

int b_search(vector<int>&a,int t)
{
    int l=0,r=a.size()-1;
    while(l<=r)
        {
        int m=l+(r-l)/2;
        if(a[m]==t)
            return m;
        if(a[l]<=a[m])
        {
            if(a[l]<=t&&t<=a[m])
            r=m-1;
            else
            l=m+1;
        }
        else
        {
            if(a[m]<=t&&t<=a[r])
            l=m+1;
            else
            r=m-1;
        }
        }
        return -1;
}

// public:
// int search(vector& a, int t) {
// return b_search(a,t);
// }


 int search(vector<int>& nums, int target) {

    int low = 0;
    int high = nums.size()-1;
    int res = -1;
    while(low<=high)
    {     
        int mid = (low+high)/2;
        //if number is found
        if(nums[mid]==target) 
        {
            res = mid;
            break;
        }
         else if((target<nums[mid] && target>=nums[low])||((target<nums[mid]||target>=nums[low]) && nums[low]>nums[mid]))
        {
            high = mid-1;
        }
        else
        {
            low= mid+1;
        }
            
    }
    return res;
}

int main()
{
    int target;
    vector<int> v={4,5,6,7,8,1,2,3};
    cout<<"Enter target"<<endl;
    cin>>target;
    cout<<"element found at: "<<search(v,target);
    
    return 0;
}

/*
int b_search(vector&a,int t)
{
int l=0,r=a.size()-1;
while(l<=r)
{
int m=l+(r-l)/2;
if(a[m]==t)
return m;
if(a[l]<=a[m])
{
if(a[l]<=t&&t<=a[m])
r=m-1;
else
l=m+1;
}
else
{
if(a[m]<=t&&t<=a[r])
l=m+1;
else
r=m-1;
}
}return -1;
}
public:
int search(vector& a, int t) {
return b_search(a,t);
}*/