#include<bits/stdc++.h>
#include "../arrays(geeks)/basic operations.cpp"
using namespace std;

void printNGE(int arr[], int n)
{
    
for(int i=0;i<n;i++)
{
    int next=-1;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            next=arr[j];
            break;
        }
    }
    cout<<next<<" ";

}
cout<<endl;
}

void StackSolution(int arr[], int n)
{
    stack<int> st;

    st.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        // if(st.empty())
        // {
        //     st.push(arr[i]);
        //     continue;
        // } 


       while(!st.empty() && st.top()<arr[i] )
       {
           cout<<"NGE for"<<st.top()<<"= "<<arr[i]<<endl;
           st.pop();
       }
       st.push(arr[i]);
    }

    while(!st.empty())
    {
        cout<<"NGE for"<<st.top()<<"= "<<-1<<endl;
        st.pop();
    }

}

void StacksolutionusingIndexes(int arr[], int n)
{
    stack<int> s;
    int temp[n]={0};
    int i=0;
    s.push(i++);
    for(;i<n;i++)
    {
        while(!s.empty() && arr[i]>arr[s.top()] )
        {
            temp[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty())
    {
        temp[s.top()]=-1;
        s.pop();
    }

    cout<<"temp arry with result"<<endl;
    print(temp,n);
}

int main()
{
    int n=0, arr[]={11,13,21,36};
    n=sizeof(arr)/sizeof(arr[0]);
    //printNGE(arr,n);

    StackSolution(arr,n);
    StacksolutionusingIndexes(arr,n);
    
}