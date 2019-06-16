#include <iostream>
using namespace std;

bool areSame(int a, int b)
{
	if(a^b == 1)
		return false;
	else
		return true;
}

int main()
{
	int a,b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	if(areSame(a,b))
		cout << "Equal" << endl;
	else
		cout << "Not equal" << endl;
}
