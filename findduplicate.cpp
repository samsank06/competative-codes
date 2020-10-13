#include<bits/stdc++.h>
using namespace std;

int repeatedNumber(const vector<int> &A) {
    int n=A.size(), res=-1;
    map<int,int>mp;
    
    for(auto i:A)
    {
        mp[i]++;
    }
    
    for(map<int,int>::iterator it=mp.begin();it!=mp.end();++it)
    {
        if(it->second >1)
        {
            return it->first;
        }
    }
    return -1;
}

int repeatedNumbers(vector<int> &A)
{
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==A[i+1])
            return A[i];
    }
    return -1;
}


int main()
{
    vector<int> v={3,5,1,3,4};
    int n=repeatedNumber(v);
    cout<<"repeated number = "<<n<<endl;

    int m=repeatedNumbers(v);
    cout<<"repeated number = "<<m<<endl;
}