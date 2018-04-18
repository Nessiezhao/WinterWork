/*************************************************************************
	> File Name: work.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Thu 01 Mar 2018 12:23:28 AM PST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i=0;
	for(i=100;i<1000;i++)
	{
		int a=i%10;
		int b=(i/10)%10;
		int c=i/100;
		double d=pow(a,3.0)+pow(b,3.0)+pow(c,3.0);
		if(d==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
