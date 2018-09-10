#include<stdio.h>

int IsUglyNumber(int num)
{
	while(num%2==0)
	num=num/2;
	
	while(num%3==0)
		num=num/3;
	while(num%5==0)
		num=num/5;
	return num==1?1:0;
}


void FindUglyNumber(int n)
{
	int number=1;
	int i=0;
	while(i<n)
	{
		if(IsUglyNumber(number))
		{
		    i++;
			printf("%d\n",number);
		}
		number++;

	}
}
int main()
{
	FindUglyNumber(100);
	return 0; 
 } 
