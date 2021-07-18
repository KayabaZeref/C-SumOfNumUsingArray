#include <stdio.h>
#include <stdlib.h>
#define max 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void InputNo(int* a, int n )
{
	int i;
	for (i=0; i<n ; i++)
	{
		printf("\tEnter an interger[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

int Sum(int * a, int n)
{
	int sum;
	int i;
	sum=0;
	for (i=0;i<n;i++)
	{
		sum+=a[i];
	}	
	return sum;
}

int main(int argc, char *argv[]) {
	int num,result;
	int* a;
	char key;
	do
	{
		a=(int*) calloc (num,sizeof(int));
		printf("Dynamic memory allocation");
		do
		{
			printf("\n\tNumber of element s = ");
			scanf("%d",&num);
		} 
		while (num <=0 || num > max);
		InputNo(a,num);
		result=Sum(a,num);
		printf("\tSum= %d\n",result);
		printf("Press any key to continue,Press ESC to end.");
		key=getchar();
		key=getch();
		printf("\n");
	}
	while (key != 27);
	return 0;
}
