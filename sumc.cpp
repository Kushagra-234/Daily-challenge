/* C++ Program to find sum of elements
in a given array */
#include <bits/stdc++.h>
using namespace std;

// function to return sum of elements
// in an array of size n
int sum(int a[], int n)
{
	int sum = 0; // initialize sum

	// Iterate through all elements
	// and add them to sum
	for (int i = 0; i < n; i++)
	sum += a[i];

	return sum;
}

// Driver code
int main()
{
	int a[] = {12, 3, 4, 15};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Sum of given array is " << sum(a, n);
	return 0;
}

// This code is contributed by rathbhupendra
