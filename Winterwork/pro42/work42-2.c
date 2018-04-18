/*************************************************************************
	> File Name: work42-2.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 28 Feb 2018 11:26:28 PM PST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int x=20;//yi gong duo shao qian
	int c=0;//yi gong ke yi he duo shao ping
	int k=0;
	while(x>0)
	{
       x=x-1;
	   c++;
	   k++;

	}
	
	   while(k>1)
	   {
		   k=k-2;
		   c++;
		   k=k+1;
	   }
	printf("%d",c);
	return 0;
}
