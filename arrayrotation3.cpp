#include<bits/stdc++.h>
using namespace std;

void jagglingAlgo(int arr[], int n, int d)
{
    //cout<<"gcd(7,3)"<<__gcd(7,3)<<" "<<__gcd(3,7)<<endl;
    for(int i=0;i<__gcd(n,d);i++)
    {
        int temp=arr[i];
        int j=i,k;
        while(1)
        {
            k=(j+d)%n;

            if(k==i)
                break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
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
   
    int arr[]={10,20,30,40,50,60,70,80};
    int n=sizeof(arr)/sizeof(arr[0]),d;
    cout<<"array rotation by jaggling algorithm"<<endl;
    cout<<"enter d"<<endl;
    cin>>d;

    jagglingAlgo(arr,n,d);
    printArray(arr,n);

    return 0;
}