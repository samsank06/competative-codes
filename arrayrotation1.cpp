#include<bits/stdc++.h>
using namespace std;

void ArrayRotation(int arr[],int n, int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
        cout<<"temp["<<i<<"]="<<temp[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<n-d;i++)
    {
        arr[i]=arr[i+d];
        cout<<"arr["<<i<<"] = "<<arr[i]<<" ";
    }
    
    cout<<endl;
    for(int i=n-d,j=0;i<n,j<d;i++,j++)
    {
        arr[i]=temp[j];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int d;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The array rotation using temp array"<<endl;
    cout<<"Enter by how many elements you want to rotate (d) "<<endl;
    cin>>d;

    ArrayRotation(arr,n,d);

    return 0;
}