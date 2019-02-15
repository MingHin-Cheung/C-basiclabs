
/*1. Write a simple program that outputs the following given string s:
- the first character of s? The second character of s.
- the last character of s?
- a substring containing all but the first character of s
- a substring containing all but the last character of s.
- experiment with the use string::substr function and get familiarized with it
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "type your string" << endl;
	cin >> s;
	string s1 = s.substr (0,1);
	string s2 = s.substr (1,1);
	string s3 = s.substr (s.length() -1);
	string s4 = s.substr (1,s.length()-1);
	string s5 = s.substr (0,s.length() -1);

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s[0] << endl;


	return 0;
}
