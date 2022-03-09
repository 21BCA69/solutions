/* Serching  String and Print It's Position
Program 4 */
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10],s[10];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter a String Name :");
		gets(name[i]);
	}
	printf("\n Enter Name to Search :");
	gets(s);
	for(i=0;i<5;i++)
	{
		if(strcmp(s,name[i]==0))
		{
			printf("Name is Available at %d Position",s[i]);
			break;
		}
	}
	if(i==5)
		printf("\n Sorry Name is Not Available.");
	getch();
}

