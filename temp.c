#include <stdio.h>

void main()

{
	
	int apple1, apple2, apple3;
	scanf("%d%d%d",&apple1,&apple2,&apple3);
	
	if(apple3>=apple2&&apple3>=apple1)
	{
		printf("Fit into Budget");
	}
	
	else 
	{
		printf("Doesn't fit into Budget");
	}
	
	
}