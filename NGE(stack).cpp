#include<bits/stdc++.h>
using namespace std;
int main()
 {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
	int tc,n;
	
	cin>>tc;
	while(tc--)
	{
	cin >> n;
	    vector <long int> arr(n), ans(n);
	    
	    for(int i = 0; i < n; i++)
	            cin >> arr[i];
	    stack <long int> s;
	    for(int i = n-1; i >= 0; i--) {
	        while(!s.empty() && arr[i] >= s.top())
	            s.pop();
	        ans[i] = s.empty() ? -1 : s.top();
	        s.push(arr[i]);
	    }
	    
	    for(int i = 0; i < n; i++)
	        cout << ans[i] << " ";
	    cout << endl;
	}
	return 0;
}