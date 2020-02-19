#include<stdio.h>

int main()
{
	char b[1024];
	char *p;
	p=b;
	fgets(p,1023,stdin);
	fputs(p,stdout);
	
	return 0;

}
