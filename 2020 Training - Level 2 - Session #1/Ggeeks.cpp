// C++ program tofind smallest number whose 
// factorial contains at least n trailing 
// zeroes. 
#include<bits/stdc++.h> 
#define ll long long

using namespace std; 

// Return true if number's factorial contains 
// at least n trailing zero else false. 
bool check(ll p, ll n) 
{ 
	ll temp = p, count = 0, f = 5; 
	while (f <= temp) 
	{ 
		count += temp/f; 
		f = f*5; 
	} 
	return (count >= n); 
} 

// Return smallest number whose factorial 
// contains at least n trailing zeroes 
ll findNum(ll n) 
{ 
	// If n equal to 1, return 5. 
	// since 5! = 120. 
	if (n==1) 
		return 5; 

	// Initalising low and high for binary 
	// search. 
	ll low = 0; 
	ll high = 5*n; 

	// Binary Search. 
	while (low <high) 
	{ 
		ll mid = (low + high) >> 1; 

		// Checking if mid's factorial contains 
		// n trailing zeroes. 
		if (check(mid, n)) 
			high = mid; 
		else
			low = mid+1; 
	} 

	return low; 
} 

// driver code 
int main() 
{ 
    ll n;
	cin >>n;
	cout << findNum(n) << endl; 
	return 0; 
} 
