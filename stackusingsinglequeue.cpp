#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q1;
    
    int Q,num,t;
    // cout<<"no of tests"<<endl;
    // cin>>Q;
    while(1)
    {
        cout<<"enter operation"<<endl;
        cin>>t;

        if(t==1)
        {
            cout<<"enter num to push"<<endl;
            cin>>num;
            q1.push(num);
        }
        else if(t==2)
        {
            for(int i=1;i<q1.size();i++)
            {
                int x=q1.front();
                q1.pop();
                q1.push(x);
            }
            int p=q1.front();
            cout<<"popped element = "<<p<<endl;
            q1.pop();
        }
        if(t==0)
        {
            exit(1);
        }
    }
}