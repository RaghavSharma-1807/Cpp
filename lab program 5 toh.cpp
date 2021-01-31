#include<stdio.h>
void toh(int n, char s, char t, char d, int* m)
{
	if(n==1)
	{
		printf("Move disc %d from peg %c to peg %c\n",n,s,d);
		(*m)++;
		return;
	}
	else
	{
		toh(n-1,s,d,t,m);
		printf("Move disc %d from peg %c to peg %c\n",n,s,d);
		(*m)++;
		toh(n-1,t,s,d,m);
	}
}
int main()
{
	int n,m=0;
	printf("Enter the no. of disks:\n");
	scanf("%d",&n);
	toh(n,'s','t','d',&m);
	printf("Number of moves=%d\n",m);
	return 0;
}
