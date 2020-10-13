#include<bits/stdc++.h>
using namespace std;

void ReverseString(string str)
{
    int n= str.length()-1;
    int l=0;

    while(l<n)    //  if l<=n then it swaps   middle char with itself
    {
        cout<<"l= "<<l<<" "<<" n= "<<n<<" str= "<<str<<endl; 
        swap(str[l++],str[n--]);
        
    }
    cout<<"string after reverse ="<<str<<endl;
}

void ReverseByTempString(string str2)
{
    int n= str2.length();
    string temp="";


    for(int i=n-1;i>=0;i--)
    {
        temp.push_back(str2[i]);
    }

    cout<<temp<<endl;

}

void ReverseByRecursion( string str3, int l, int h)
{
    if(l>h)
        return;
    swap(str3[l++],str3[h--]);
    ReverseByRecursion(str3,l,h);
    if(l>=h)
    {
        cout<<"str3= "<<str3<<endl;
    }
}

int main()
{
    string str="edcba";
    ReverseString(str);

    string str1= "fedcba";
    reverse(str1.begin(),str1.end());
    cout<<"str1= "<<str1<<endl;

    reverse(str1.begin()+1,str1.end()-1);
    cout<<"str1= "<<str1<<endl;

    cout<<"using temp string"<<endl;
    string str2="tsrqp";
    ReverseByTempString(str2);

    cout<<"using recursion"<<endl;
    string str3="zyxwvu";
    ReverseByRecursion(str3,0,str3.length()-1);
    


}