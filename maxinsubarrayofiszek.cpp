#include<bits/stdc++.h>
using namespace std;

void MaxInSubarrayOfSizeK(int arr[], int n,int k)
{
//     deque<int> dq;
//     int max;
//     int i=0;
//    dq.push_back(i);
//    for(i=1;i<n;i++)
//    {
       
//        if(arr[i]>arr[dq.front()])
//        {
//            dq.pop_front();    
//        }   
//        dq.push_back(i);
//        if(i-k>=dq.front())
//             dq.pop_front();  

//    }

    
   for(int i=0;i<=n-k;i++)
   {
       int max=arr[i];
       for(int j=i+1;j<k+i;j++)
       {
           if(arr[j]>max)
            max=arr[j];
       }
       cout<<max<<" ";
   }

    
}

int main()
{
    int arr[]= {4,5,3,2,4,1,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    cout<<"Max in subarray of size k"<<endl;
    MaxInSubarrayOfSizeK(arr,n,k);
}