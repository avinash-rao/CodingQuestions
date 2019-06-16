#include <iostream>
using namespace std;

int main()
{
	char c;
	int n;
	cout << "Enter a character: ";
	cin >> c;
	cout << "Enter value of n: ";
	cin >> n;
	
	for (int i = 1; i<=n; i++)
	{
		cout << char(int(c) + i) << " ";
	}
	cout << endl;
}
