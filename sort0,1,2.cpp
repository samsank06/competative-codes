#include<bits/stdc++.h>
using namespace std;

void Bruteforcesorting(int arr[], int n)
{
    sort(arr, arr+n);
}

void Efficientsorting(int arr[], int n)
{
    int l=0,m=0,h=n-1;

    while(m<=h)
    {
        if(arr[m]==0)
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else  if(arr[m]==1)
        {
            m++;
        }
        else
        {
            swap(arr[m],arr[h]);
            h--;
        }

    }

}

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,1,0,0,2,2,2,1,2,1,0,2,1,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    // Bruteforcesorting(arr,n);
    // print(arr,n);
    Efficientsorting(arr,n);
    print(arr,n);
}