/* Write a program to enter five string and print */
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10];
	int i,j,c=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter a name %d : ",i+1);
		flushall();
		gets(name[i]);
	}
	for(i=0;i<5;i++)
	printf("\n\t Enter Name %d : %s",i+1,name[i]);
	printf("\n");
	for(i=0;i<5;i++)
	{
	for(j=0,c=0;j<9;j++)
	{
	switch(name[i][j])
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':printf("%c ",name[i][j]);
		 c++;
	break;
	}
	}
		printf("\n Number of Vowels in Name %d is %d:",i+1,c);
	}
	getch();
}