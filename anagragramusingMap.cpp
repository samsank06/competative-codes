#include<bits/stdc++.h>
using namespace std;

void checkAnagram(string s1, string s2)
{
    map<int,int> mp;
    int m=s1.length();
    int n=s2.length();

    if(m!=n)
    {
        cout<<"both strings are of different sizes"<<endl;
        exit(1);
    }
    int count=0;
    for(int i=0;i<s1.length();i++)
    {
        mp[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++)
    {
        mp[s2[i]]--;
    }

    // cout<<mp.size();
    // if(mp.size()==0)
    //     cout<<"true";
    // else
    //     cout<<"false";

    for(int i=0;i<s1.length();i++)
    {
        if(mp[s1[i]]==0)
        {
            count++;
        }
    }

    if(count==s1.length())
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}

int main()
{
    string s1="srikrishna", s2="kirshanris";

    checkAnagram(s1,s2);
}