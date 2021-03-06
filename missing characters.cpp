// C++ program to find characters that needs
// to be added to make Pangram
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// Returns characters that needs to be added
// to make str
string missingChars(string str)
{
	// A boolean array to store characters
	// present in string.
	bool present[MAX_CHAR] = {false};

	// Traverse string and mark characters
	// present in string.
	for (int i=0; i<str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			present[str[i]-'a'] = true;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			present[str[i]-'A'] = true;
	}

	// Store missing characters in alphabetic
	// order.
	string res = "";
	for (int i=0; i<MAX_CHAR; i++)
		if (present[i] == false)
			res.push_back((char)(i+'a'));

	return res;
}

// Driver program
int main()
{
	string str = "The quick brown fox jumps "
				"over the dog";
	cout << missingChars(str);
	return 0;
}	
