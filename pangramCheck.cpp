//this method works only if there are no special chars in string like: space etc
#include<bits/stdc++.h>
using namespace std;

bool pangramCheck(string str, int n)
{
    map<int,int> mp;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' )
        {
            mp[str[i]]++;
        }
    }
     cout<<mp.size()<<endl;
    for(auto i:mp)
    {
       cout<<i.first<<" "<<i.second<<endl;
       
        if(i.first>=97 && i.first<= 122)
        {
            count++;
        }   
    }
    if(count==26)
        return true;
    else
        return false;
    
} 

int main()
{
    string str="The quick brown fox jumps over the lazy dog";
    int n=str.length();

    if(pangramCheck(str,n))
        cout<<"yes the string is pangram";
    else
        cout<<"no not pangrams";
}