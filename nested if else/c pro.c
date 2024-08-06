 #include<stdio.h>

void main()
	{
		int a,b,c,d;
		printf("enter a : ");
		scanf("%d",&a);
		printf("enter b : ");
		scanf("%d",&b);
		printf("enter c : ");
		scanf("%d",&c);
		printf("enter d : ");
		scanf("%d",&d);


	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");	
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");	
			}
			else
			{
				printf("d is maximum");	
			}	
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	
	}
	
}
