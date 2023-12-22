// C++ program to understand the use of getline() function 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string S, T; 

	// getline(cin, S);
    S = "Hello, Akshat Al Mamun. Welcome to GfG!"; 

	stringstream X(S); 

	while (getline(X, T, ' ')) { 
		cout << T << endl; 
	} 

	return 0; 
} 
