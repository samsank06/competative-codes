#include<bits/stdc++.h>
#define n CHAR_MAX
using namespace std;

void anagram_function(string a, string b)
{
    int c[n]={0};
    int count=0;

    for(int i=0;i<a.length();i++)
    {
        c[a[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<c[i];
    }
    cout<<endl;
    for(int i=0;i<b.length();i++)
    {
        c[b[i]]--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<c[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(c[i]==0)
            count++;
    }

    if(count==n)
        cout<<"they are anagrams"<<endl;
    else
        cout<<"not anagrams"<<endl;
    
}

int main()
{

    //cout<<CHAR_MAX<<" "<<CHAR_MIN<<endl;
    int c1[n]={0}, c2[n]={0};
    int count=0;
    string s1="cab", s2="bca";

    cout<<"through function"<<endl;
    anagram_function(s1,s2);
    cout<<endl;
    cout<<endl;
    

    cout<<"through main function"<<endl;
    for(int i=0;i<s1.length();i++)
    {
        c1[s1[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<c1[i];
    }

    // for(int i=0;i<256;i++)
    // {
    //     if(c[i]==0)
    //         count++;
    // }
    // cout<<"count= "<<count<<endl;

    cout<<endl;
    for(int i=0;i<s2.length();i++)
    {
        c2[s2[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<c2[i];
    }

   for(int i=0;i<n;i++)
    {
        if(c1[i]==c2[i])
        {
            count++;
        }
            
    }
    cout<<endl;
    cout<<"count= "<<count<<endl;

    if(count==n)
        cout<<"they are anagrams"<<endl;
    else
        cout<<"not anagrams"<<endl;
    
    
}