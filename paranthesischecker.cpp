#include<bits/stdc++.h>
using namespace std;
int main()
 {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
	int tc;
	
	cin>>tc;
	while(tc--)
	{
	    string exp;
	    int i=0, flag=1;
	    cin>>exp;
	    stack<char> s;
	    
	    while(exp[i]!='\0')
	    {
	        if(exp[i]=='[' || exp[i]=='{' || exp[i]=='(')
	        {
	            s.push(exp[i]);
	        }
	        else if(!s.empty()&&((exp[i]==')' && s.top()=='(' ) || (exp[i]=='}' && s.top()=='{') || (exp[i]==']' && s.top()=='[')))
	        {
	            s.pop();
	        }
	        else{
	            flag=0;
	            break;
	        }
	        i++;
	    }
	    
	    if(flag&& s.empty())
	    {
	        cout<<"balanced"<<endl;
	    }
	    else{
	        cout<<"not balanced"<<endl;
	    }
	    
	}
	return 0;
}