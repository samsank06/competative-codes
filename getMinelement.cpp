#include<bits/stdc++.h>
using namespace std;

stack<int> s;

int main()
{
s.push(10);
s.push(30);
s.push(20);
s.push(23);

int min= s.top();

while(!s.empty())
{
    s.pop();
    if(s.top()< min)
    {
        min = s.top();
    }
}
cout<<"min = "<<min<<endl;
}