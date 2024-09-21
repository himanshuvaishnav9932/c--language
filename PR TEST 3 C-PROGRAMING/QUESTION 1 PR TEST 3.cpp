#include<stdio.h>
#include<conio.h>
main()
{
	//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do-while loop.
	char i;
	for(i='a';i<='z'; i+=6)
	{
		printf(" %c ",i);	
	}
}

