#include<bits/stdc++.h>
using namespace std;

void stringReverse(string strtemp, int l,int h)
{
	int i=0;
	while(l<h)        // if for loop used : for(int k=0;k<(h/2);k++)
	{
		swap(strtemp[l++],strtemp[h--]);
	}
	
/*	while(strtemp[i]!='\0')
	{
		cout<<strtemp[i++];
	}
*/		
	cout<<strtemp<<endl;
}


void reverseByRecursion(string s3, int l, int h)
{
	if(h<=l)
		return;
	swap(s3[l],s3[h]);
	reverseByRecursion(s3,l+1,h-1);
}

int main()
{
	string str="krishna";
	string str1="karnan";
	
	//method -1:
	
	int l=0,i=0;
	int h= str.length()-1;
	stringReverse(str, l,h);
	int h1= str1.length()-1;
	stringReverse(str1, l,h1);
	
	//method-2 :
	string s1="fedcba";
	reverse(s1.begin(),s1.end());
	cout<<"string s1="<<s1<<endl;
	
	//method-3:

	string s2="Rohitsharma";
	string temp;
	cout<<"string s2 before reverse: "<<s2<<endl;
	
	 for(int i=s2.length()-1; i>=0;i--)
	 {
	 	temp.push_back(s2[i]);
	 }
	cout<<"string s2 after reverse: "<<temp<<endl;
	
	//method -4: recursion:
	
	string s3="recursion";
	reverseByRecursion(s3,0,s3.length()-1);
	
	
}
