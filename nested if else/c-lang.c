#include<stdio.h>

main()
{
	int a,b,c,d,e;
	printf("enter the values :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	//a,b,c,d,e
	if(a>b)
	{
		//a,c,d,e
		if(a>c)
		{
			//a,d,e
			if(a>d)
			{
				//a,e
				if(a>e)
				{
					printf("a is maximum");	
				}
				else
				{
					printf("e is maximum");
				}	
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf("d is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
				if(c>e)
				{
					printf("c is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf("d is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("b is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf("d is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
				if(c>e)
				{
					printf("c is maximum");
				}
				else
				{
					printf("e is maximum");
				}
				}
				else
				{	if(d>e)
				{
					printf("d is maximum");
				}
				else
				{
					printf("e is maximum");
				}
			}	
		}
	}
}