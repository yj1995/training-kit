#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "myHeader.h"
void main()
{
	int n,i,a=0;
	emp1 *e;
	char b;
	printf("enter the no of employee:");
	scanf("%d",&n);
	e=(emp1 *)malloc(n*sizeof(emp1));
	Accept(e,n);
	printf("\nDisplay Employees Information\n");
	Display(e,n);
	do
	{
		int c;
		printf("\n1.Insert\n2.Delete\n3.Update\nEnter your choose:");
		scanf("%d",&c);
		switch (c)
		{
		case 1:	n=Insert(e,n);
				printf("\nDisplay Employees Information\n");
				Display(e,n);
				break;
		case 2: n=Delete(e,n);
				printf("\nDisplay Employees Information\n");
				Display(e,n);
				break;
		case 3: Replace(e,n);
				printf("\nDisplay Employees Information\n");
				Display(e,n);
		default: printf("Invalid Choose\n");
				 break;
		}
		a=0;
		fflush(stdin);
		printf("IF u want to continue enter y/n\n");
		scanf("%c",&b);
		if (b=='Y'||b=='y')
				a++;
	}while(a);
	
	getch();
}