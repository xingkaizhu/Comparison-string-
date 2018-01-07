#include <stdio.h>
int main(){
	int i,m,n,k;
	n=0;
	char b[1000],a[1000];
	for(i=0;i<1000;i++)
	{b[i]='\0';
	a[i]='\0';
	}
	gets(a);
	gets(b);
	for (i=0;(a[i]!='\0')&&(b[i]!='\0');i++)
	{if (a[i]!=b[i])
	{
	printf("%d\n",a[i]-b[i]);
	n=1;
	break;
	}
	}
	if(n==0)
	puts("0\n");
	return 0;
}
