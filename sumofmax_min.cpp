#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int max=INT_MIN;
    int min=INT_MAX;
    
    int n=A.size();
    
    for(auto i:A)
    {
        if(i>max)
        {
            max=i;
        }
        if(i<min)
        {
            min=i;
        }
    }
    return max+min;
}

int solve2(vector<int> &B)
{
    sort(B.begin(),B.end());
    int n=B.size();
     
    
    return B[n-1]+B[0];
}

int main()
{
    vector<int> v={-3,2,1,3,4,-2};
    int n=solve(v);
    int m=solve2(v);
    cout<<"solve1 = "<<n<<endl;
    cout<<"solve2 = "<<m<<endl;

}
