// C++ code to find 
// duplicates in O(n) time 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	
	int numRay[] = {0, 4, 3, 2, 7, 8, 2, 3, 1,0,3,2,4,14,1,1,7,1,7,14}; 
	int arr_size = sizeof(numRay) / sizeof(numRay[0]); 
    cout<<"array size= "<<arr_size<<endl;
	for (int i = 0; i < arr_size; i++) 
	{ 
		numRay[numRay[i] % arr_size] = numRay[numRay[i] % arr_size] + arr_size; 
	} 
	cout << "The repeating elements are : " << endl; 
	for (int i = 0; i < arr_size; i++) 
	{ 
		if (numRay[i] >= arr_size*2) 
		{ 
			cout << i << " " << endl; 
		} 
	} 
	return 0; 
} 

// This code is contributed by PrinciRaj1992 
