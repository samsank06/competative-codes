#include<bits/stdc++.h>
using namespace std;

void CheckPalindrome(string str)
{
    int l=0; int h=str.length()-1;
    string str1=str;
    while(l<h)
    {
        swap(str[l++],str[h--]);
    }

    if( str1==str)
        cout<<"the string is palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;
}

void CheckPalindrome2(string str2)
{
    int l=0; int h=str2.length()-1;
    int count=0;
    while(l<h)
    {
        if(str2[l++]==str2[h--])
            count++;    
    }
    if(count = str2.length()/2)
        cout<<"yes palindrome"<<endl;
    else
        cout<<"not palindrome"<<endl;    
}

int main()
{
    string str="abcdcba";
    CheckPalindrome(str);

    string str1="abcdcbac";
    CheckPalindrome(str1);

    cout<<"method-2 "<<endl;
    string str2="abccba";
    CheckPalindrome2(str2);

}