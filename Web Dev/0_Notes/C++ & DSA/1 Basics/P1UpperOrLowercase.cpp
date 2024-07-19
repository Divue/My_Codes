//P1
#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter alphabet" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
		cout << "Entered ch is " << ch << " and it is in Lower Case";
	else if (ch >= 'A' && ch <= 'Z')
		cout << "Upper Case";
	else
		cout << "Numeric";
}