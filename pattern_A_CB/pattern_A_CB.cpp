#include <iostream>
using namespace std;

int main()
{
	int i,j,alpha=64,k,n;
	
	cout << "Enter number of rows: ";
	cin >> n;
	
	for(i=1; i<=n; i++)
	{
		for(j=i; j<n; j++)
			cout << " ";
		
		alpha += i;
		for(k=1; k<=i;k++)
		{
			cout << char(alpha);
			alpha--;
		}
		alpha = alpha +i;
		cout << endl;
	}
}
