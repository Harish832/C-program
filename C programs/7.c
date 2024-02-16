#include<stdio.h>
#include<math.h>
int main()
{
	long int int_a=0;
	long int int_b=0;
	int a[]={5,6,7,3,4,5};
	int b[]={5,8,7,7};
	int n=0,int_c_count=0;
	long int ans=0,temp=0;
	int a_count=sizeof(a)/sizeof(a[0]);
	int b_count=sizeof(b)/sizeof(b[0]);
	int c[n],i;
	if(a_count>=b_count)
	{
		n=a_count;
	}
	else
	{
		n=b_count;
	}
	for(i=0;i<a_count;i++)
	{
		int_a=int_a*10+a[i];
	}
	for(i=0;i<b_count;i++)
	{
		int_b=int_b*10+b[i];
	}
	ans=pow(10,n) -1;
	ans=ans-int_b;
	ans=ans+int_a;
	temp=ans;
	ans=ans % (long int)pow(10,n);
	temp=temp/(long int)pow(10,n);
	ans=ans+temp;
	temp=ans;
	while(temp>=1)
	{
		temp/=10;
		int_c_count++;
	}
	i=int_c_count-1;
	while(i>=0)
	{
		c[i]=ans%10;
		ans/=10;
		i--;
	}
	i=0;
	while(i<int_c_count)
	{
		printf("%d",c[i]);
		i++;
	}
}