#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,2,6,5,8,7,6};
    int temp[9]={0};


    unordered_set<int> st;
    st.insert(arr,arr+9);

    cout<<"array contains"<<endl;
    for(auto i:st)
    {
        cout<<i<<" ";
    }

}