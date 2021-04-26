#include<stdio.h>
main()
{
	int i,j,a,b;
	a=0;
	b=1;
	for(i=1;i<7;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d%d",a,b);
     	}
     	printf("\n");
	}
	return 0;
}
