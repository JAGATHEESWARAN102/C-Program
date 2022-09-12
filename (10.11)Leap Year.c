#include<stdio.h>
int main()
{
	int d,m,i,j=1;
	float y;
	while(j==1)
	{
		printf("Enter Date:");
		scanf("%d/%d/%f",&d,&m,&y);
		i=y;
		if(d>0,m>0,y>0 &&i==y && d<32 && m<13)
		{
			if(i%4==0)
			{
				printf("Ginen is leap year");
			}
			else
			{
				printf("Given year is not a leap year");
			}
		}
		else
		{
			printf("Given year is invalid");
		}
		printf("\n Do you want to continue:(1/0):");
		scanf("%d,&j");
	}
}
