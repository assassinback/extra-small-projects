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
	int count=0;
	for(int j=0;j<24;j++)
	for(int i=0;input[i]=='@';i++)
	{
			for(int k=0;k<i;k++)
			{
				count++;
				output[j][k]=input[k];
			}
			j++;
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
