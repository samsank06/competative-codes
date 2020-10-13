#include<bits/stdc++.h>
#include "basic operations.cpp"
using namespace std;


void BruteForceRearrange(int arr[], int n)
{
    int temp[n]={0};

    int l=0,h=n-1;
    int i=0;
    while(l<h)
    {
        temp[i++]=arr[h--];
        temp[i++]=arr[l++];
    }
    cout<<"rearranged array is"<<endl;
    print(temp,n);

}

void efficientRearrange(int arr[], int n)
{
    int max_element= arr[n-1]+1;
    int h=n-1;
    int l=0;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+arr[h]%max_element * max_element;
            h--;
        }
        else{
            arr[i]=arr[i]+arr[l]%max_element * max_element;
            l++;
        }
    }

    cout<<"after modification"<<endl;
    print(arr,n);
    cout<<"The original array is:"<<endl;
    
    // for(int i=0;i<n;i++)
    //     arr[i]%=max_element;
    // print(arr,n);

    cout<<"The rearranged  array is:"<<endl;
    for(int i=0;i<n;i++)
        arr[i]/=max_element;
    print(arr,n);

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    BruteForceRearrange(arr,n);
    efficientRearrange(arr,n);
    
}