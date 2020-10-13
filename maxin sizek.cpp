#include<bits/stdc++.h>
using namespace std;

void Maxinsizek(vector<int> &nums,int k)
{
    deque<int>dq;
    vector<int> res;
    for(int i=0;i<k;i++)
    {
        if(!dq.empty()&&nums[i]>nums[dq.front()])
            dq.pop_front();
        dq.push_back(i);    
    }

    

    for(int i=k;i<nums.size();i++)
    {
        cout<<dq.front()<<" ";

        while((!dq.empty())&&(i-k)>=dq.front())
        {
            dq.pop_front();
        }

        while((!dq.empty())&&nums[i]>=nums[dq.front()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    


}
    

int main()
{
    vector<int> vec={4,5,3,2,4,6,1};
    int k;
    cout<<"enter k"<<endl;
    cin>>k;
    Maxinsizek(vec,k);

    return 0;
}