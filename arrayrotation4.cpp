#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int p, int q)
{
    while(p<q)
    {
        swap(arr[p],arr[q]);
        p++;
        q--;
    }
}

void RotationOfArray(int arr[], int n, int d)
{
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
}

void PrintArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(arr[0]),d;
    cout<<"enter d"<<endl;
    cin>>d;
    RotationOfArray(arr,n,d);
    PrintArray(arr,n);
    return 0;
}