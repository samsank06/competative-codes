#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="123456789abcdABCD@!#$";
    int i=0;
    int uppercount=0, lowercount=0, numericcount=0,specialcount=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            uppercount++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
               lowercount++; 
        }
        else if( str[i]>='1' && str[i]<='9')
        {
            numericcount++;
        }
        else{
            specialcount++;
        }
        i++;
    }

    cout<<"uppercases count= "<<uppercount<<endl;
    cout<<"lowercases count= "<<lowercount<<endl;
    cout<<"numericals count= "<<numericcount<<endl;
    cout<<"special char count= "<<specialcount<<endl;


}