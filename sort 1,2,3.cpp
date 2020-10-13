#include<bits/stdc++.h>
using namespace std;

void sort123(int arr[], int n)
{
    int l=0,m=0,h=n-1;

    while(m<h)
    {
      if(arr[m]==1)
      {
          swap(arr[m],arr[l]);
          l++; m++;
      }
      if(arr[m]==2)
      {
          m++;
      }
      if(arr[m]==3)
      {
          swap(arr[m],arr[l]);
          m++;
          l--;
      }

    }
}

void print123(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={3,2,1,2,2,3,1,3};
    int n= sizeof(arr)/sizeof(arr[0]);

    sort123(arr,n);
    print123(arr,n);

}