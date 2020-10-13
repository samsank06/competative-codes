#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int Q;
    cout<<"no of Queries(enter Q)"<<endl;
    cin>>Q;
    while(Q--)
    {
        int t=0, num;
        cout<<"enter operation to perform 1(push) 2(pop)"<<endl;
        cin>>t;
        if(t==1)
        {
            cout<<"enter element to push"<<endl;
            cin>>num;
            q.push(num);
        }
        else if(t==2)
        {
            q.pop();
        }

        cout<<"q.front() = "<<q.front()<<endl;
        cout<<"q.back() = "<<q.back()<<endl;
    }
}
