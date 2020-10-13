#include<bits/stdc++.h>
using namespace std;


vector<int> plusOne(vector<int> &A) {
    int n=A.size();
    
    int carry=0;
    A[n-1]+=1;
    carry=A[n-1]/10;
    A[n-1]%=10;
    
    for(int i=n-2;i>=0;i--)
    {
        if(carry==1)
        {
            A[i]+=1;
            carry=A[i]/10;
            A[i]%=10;
        }
        
    }
    
    if(carry==1)
    {
        A.insert(A.begin(),1);
    }
    while(1)
    {
    auto it=A.begin();
    if(*it==0)
    {
        A.erase(A.begin());
    }
    else{
        break;
    }
    
    }

    return A;
    
}

int main()
{
    vector<int> v,res;
    int A,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A;
        v.push_back(A);
    }

    res=plusOne(v);
    
    for(auto i:res)
    {
        cout<<i<<" ";
    }

}