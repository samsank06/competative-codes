#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    

    int c;
    cout<<"no of Queries(enter Q)"<<endl;
    cin>>c;

    while(c--)
    {
        int t=0, num;
        cout<<"enter operation to perform 1->(push) 2->(pop)"<<endl;
        cin>>t;
        if(t==1)
        {
            cout<<"enter element to push"<<endl;
            cin>>num;

            s1.push(num);
            
        }
        else if(t==2)
        {
            if(s2.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }

            cout<<"popped element is"<<s2.top()<<endl;
            s2.pop();
            
        }

        // cout<<"q.front() = "<<s2.top()<<endl;
        // cout<<"q.back() = "<<s1.top()<<endl;
    }
}

/*

>>>Leetcode solution>>>

class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
      //  MyQueue *obj= new Myqueue();
        
        
    }

    void push(int x) {
        
        s1.push(x);
    }
    
    int pop() {
        
        while(!s1.empty())
        {
            s2.push(s1.top());
                s1.pop();
        }
        
        int x= s2.top();
        s2.pop();
        
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    int peek() {
        
         while(s1.size())
         {
             s2.push(s1.top());
             s1.pop();
         } 
        int ret = s2.top();
        
        while(s2.size())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ret;
    }
    
    bool empty() {
        return s1.size()==0;
    }
};

*/