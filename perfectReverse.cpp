// given string "abc" if reverse of all the substring are present in given string then it is perfect revesible:
// also  a string is perfect reversible if it is a palindrome.
#include<bits/stdc++.h>
using namespace std;

bool perfectReversible(string str)
{
    int l=0, h=str.length()-1;
    while(l<h)
    {
        if(str[l++]!=str[h--])
            return false;
        
    }
    return true;
}

int main()
{
    string str= "abcba";
    if(perfectReversible(str))
        cout<<"yes";
    else
        cout<<"no";
}