#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char c;
	FILE *fp;
	
	fp = fopen(__FILE__, "r");
	
	do
	{
		c = fgetc(fp);
		putchar(c);
	}
	while( c!=EOF );
	
	fclose(fp);
}