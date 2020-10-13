#include<bits/stdc++.h>
using namespace std;

void  decimaltoBinary(int num)
 {
    int i=0;
    int temp[32];
    while(num)
    {
        temp[i++]=num%2;
        num=num/2;
    }

    for(int j=i-1;j>=0;j--)
    {
        cout<<temp[j]<<" ";
    }
    cout<<endl;
}

void decimaltoBase7(int num)
{
    int i=0;
    int temp[32]={0};
    while(num)
    {
        temp[i++]=num%7;
        num/=7;
    }

    for(int j=i-1;j>=0;j--)
    {
        cout<<temp[j]<<" ";
    }
    cout<<endl;
}

int base7toDecimal(int num)
{
    int res=0,dec=0,i=0;
    while(num)
    {
        dec=num%10;
        res=res+dec*pow(7,i++);
        num/=10;
    }
    //cout<<res<<endl;
    return res;
}

void base7toBinary(int num1)
{
    int dec=base7toDecimal(num1);
    decimaltoBinary(dec);

}

int main()
{
    int num=45;
    int num1=63;
    cout<<"Binary representation of Dec number"<<endl;
    decimaltoBinary(num);
    cout<<"Base-7 representation of Dec number"<<endl;
    decimaltoBase7(num);
    cout<<"Decimal representation of Base-7 number"<<endl;
    cout<<base7toDecimal(num1)<<endl;
    cout<<"Binary representation of base-7 number"<<endl;
    base7toBinary(num1);


}