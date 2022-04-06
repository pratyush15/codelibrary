// C++ program to remove vowels from a String
#include <bits/stdc++.h>
using namespace std;

string remVowel(string str)
{
	vector<char> vowels = {'a', 'e', 'i', 'o', 'u',
						'A', 'E', 'I', 'O', 'U'};
	
	for (int i = 0; i < str.length(); i++)
	{
		if (find(vowels.begin(), vowels.end(),
					str[i]) != vowels.end())
		{
			str = str.replace(i, 1, "");
			i -= 1;
		}
	}
	return str;
}

// Driver Code
int main()
{
	string str = "GeeeksforGeeks - A Computer"
				" Science Portal for Geeks";
	cout << remVowel(str) << endl;

	return 0;
}

