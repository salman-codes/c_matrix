// C Program to add, substract and multiply two matrix using menu driven program.

#include <stdio.h>
#include <conio.h>
#define MROWS 100
#define MCOLS 100
char item[][100]={"Input Matrix","Matrix Addition","Matrix Substraction","Matrix Multiplication","Exit"};
void menu(int);
void minput(int**, int*, int*);
void madd(int**, int, int, int**, int, int);
void msubs(int**, int, int, int**, int, int);
void mmult(int**, int, int, int**, int, int);

// MAIN Program
void main()
{
	int pos=0;
	int A[MROWS][MCOLS], B[MROWS][MCOLS], C[MROWS][MCOLS] ,r1=0, 
    r2=0,c1=0,c2=0;
	char key;
	while(1)
	{
		clrscr();
		_setcursortype(_NOCURSOR);
		menu(pos);
		key=getch();
		if(key==72)		//check for up arrow key
			pos--;
		else if(key==80)	//check for down arrow key
			pos++;
		else if(key==27)	//check for Esc key
			break;
		else if(key==13)	//check for return key
		{
			_setcursortype(_NORMALCURSOR);
			if(pos==0)
			{
				minput(A, &r1,&c1);
				minput(B, &r2,&c2);
			}
			else if(pos==1)
				madd(A,r1,c1,B,r2,c2);
			else if(pos==2)
				msubs(A,r1,c1,B,r2,c2);
			else if(pos==3)
				mmult(A,r1,c1,B,r2,c2);
			else if(pos==4)
			{
				printf("\n Exiting from program");
				getche();
				break;
			}
		}
		if(pos>4)
			pos=0;
		if(pos<0)
			pos=4;
		menu(pos);
	}
}

// MENU
void menu(int pos)
{
	int x=25, y=5, i;
	clrscr();
	textcolor(GREEN);
	gotoxy(x,y);
	cprintf("**** M E N U ****");
	for(i=0;i<5;i++)
	{
		gotoxy(x,y+=2);
		if(i==pos)
		{
			textbackground(RED);
			textcolor(BLUE);
		}
		else
		{
			textbackground(BLACK);
			textcolor(RED);
		}
		cprintf("%s",item[i]);
	}
	textbackground(BLACK);
	textcolor(WHITE);
	gotoxy(x,++y);
	cprintf(" ");
}

// Adding the Matrix
void madd(int **A, int r1, int c1, int **B, int r2, int c2)
{
	int  C[MROWS][MCOLS],i,j,r3,c3;
	clrscr();
	if(r1==0 || c1==0 || r2==0 || c2==0)
		printf("\nPlease enter the dimensions of matrix");
	if(r1!=r2 && c1!=c2)
		printf("\nAddition cannot be performed");
	else
	{
		printf("\nAddition of matrices is_ _ _ _ _ _ \n");
		for(i=0;i<r1;i++)
		{
			printf("\n");
			for(j=0;j<r2;j++)
			{
				C[i][j]=A[i][j]+B[i][j];
				printf("%5d",C[i][j]);
			}
		}
	}
	getch();
}

// Multyplying Matrix
void mmult(int **A,int r1, int c1, int **B, int r2,int c2)
{
	int C[MROWS][MCOLS],i,j,k,r3,c3;
	clrscr();
	if(r1==0 || c1==0 || r2==0 || c2==0)
		printf("Please enter the dimensions of matrix");
	printf("\nMultiplication of Matrices is _ _ _ _ _ _ _\n");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			C[i][j]=0;
			for(k=0;k<c2;k++)
				C[i][j]+=A[i][k]*B[k][j];
			printf("%4d",C[i][j]);
		}
	}
	getch();
}

// Subtracting two Matrix
void msubs(int **A,int r1, int c1, int **B,int r2, int c2)
{
	int C[MROWS][MCOLS],i,j,r3,c3;
	clrscr();
	if(r1==0 || c1==0 || r2==0 || c2==0)
		printf("Please enter the dimensions of matrix");
	if(r1!=r2 && c1!=c2)
		printf("\nSubstraction cannot be performed");
	else
	printf("\nSubstraction of matrices is_ _ _ _ _ _");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<r2;j++)
		{
			C[i][j]=A[i][j]-B[i][j];
			printf("%5d",C[i][j]);
		}
	}
	getch();
}

// Taking Input
void minput(int **A,int *r1,int *c1)
{
	int i,j,r,c;
	clrscr();
	printf("\nEnter the dimensions: ");
	scanf("%d%d",&r,&c);
	*r1=r;
	*c1=c;
	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
		{
			printf("A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	printf("MATRIX:\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
			printf("%4d",A[i][j]);
		printf("\n");
	}
	getch();
}