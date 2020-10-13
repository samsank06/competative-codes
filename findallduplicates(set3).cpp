// O(n)  and O(1) space
#include <iostream> 
using namespace std; 

// function to find repeating elements 
void printRepeating( int arr[], int n) 
{ 
	// First check all the values that are 
	// present in an array then go to that 
	// values as indexes and increment by 
	// the size of array 
	for (int i = 0; i < n; i++) 
	{ 
		int index = arr[i] % n; 
		arr[index] += n; 
	} 

	// Now check which value exists more 
	// than once by dividing with the size 
	// of array 
	for (int i = 0; i < n; i++) 
	{ 
		if ((arr[i]/n) > 1) 
			cout << i << " "; 
	} 
} 

// Driver's code 
int main() 
{ 
	int arr[] = {1, 6, 3, 1, 3, 6, 6,0,0,10,10,12,12,14,1,3,17,17}; 
	int arr_size = sizeof(arr)/sizeof(arr[0]); 
    cout<<"array size= "<<arr_size<<endl;
	cout << "The repeating elements are: \n"; 
	printRepeating( arr, arr_size); 
	return 0; 
} 
