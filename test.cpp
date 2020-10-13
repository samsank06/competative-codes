#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int pivot; 
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[i+1])
            {
                 pivot= i+1;
                 break;
            }    
        }
        if(nums[pivot]==target)
                return pivot;
            
        for(int i=pivot;i<nums.size();i++)
          {
              if(nums[pivot]==target)
                    return pivot;
          }      

        return -1;
    }

    int main()
    {
        vector<int> v={2,3,4,5,6,1};
        cout<<search(v,5);
    }