#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {4,5,3,2,4,1,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"range based for loop"<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl;

    cout<<"reference based"<<endl;
    for(auto &i:arr)
        cout<<i<<" ";
    cout<<endl;

    cout<<"const reference based"<<endl;
    for(const auto &i:arr)
        cout<<i<<" "; 
    

}