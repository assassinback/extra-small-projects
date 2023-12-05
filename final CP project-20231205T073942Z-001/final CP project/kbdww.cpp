#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[25];
	char output[3][25];
	printf("Enter the email address:\n");
	gets(input);
	int j=0;
	int i;
	int count=0;
	for(i=0;i<24;i++)
	{
		if(input[i]=='@')
		{
			for(int k=0;k<i;k++)
			{
				count++;
				output[j][k]=input[k];
			}
			j++;
		}
		else if(input[i]=='.')
		{
			int l=0;
			for(int k=count+1;k<i;k++)
      		{
		         output[j][l]=input[k];
		         l++;
		         count++;
	        }
	        j++;
		}
		else
		{
			int l=0;
			for(int k=count+1;k<24;k++)
			{
				output[j][l]=input[k];
				l++;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int k=0;k<24;k++)
		{
			printf("%c",output[i][k]);
		}
		printf("\n");
	}
}
