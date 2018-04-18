/*************************************************************************
	> File Name: work.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Fri 02 Mar 2018 05:02:49 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int killer=0;
	for(killer=1;killer<=4;killer++)
	{
		if((killer!=1)+(killer==3)+(killer==4)+(killer!=4)==3)
		{
			printf("killer=%d\n",killer);
		}
	}
	return 0;
}
