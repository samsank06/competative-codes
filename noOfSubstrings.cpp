#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="krishna";
    int n=str.length();

    int total= n*(n+1)/2;
    
    //printf("No fo substring s of a string is %d\n",total);
    cout<<"No of substrings of "<<str <<" is "<<total<<endl;

}