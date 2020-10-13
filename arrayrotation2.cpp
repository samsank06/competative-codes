#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void ArrayRotateByOne(int arr[],int n, int d)
{
    for(int i=0;i<d;i++)
    {
        rotateArray(arr,n);
    }  
}

void printArray(int arr[], int n)
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
    cout<<"array rotation by rotate by one each time till d"<<endl;
    cout<<"enter d"<<endl;
    cin>>d;
    if(d>n)
    {
        d%=n;
    }
    ArrayRotateByOne(arr,n,d);
    cout<<"Rotated array is"<<endl;
    printArray(arr,n);
    return 0;
}