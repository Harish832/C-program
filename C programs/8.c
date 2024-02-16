#include<stdio.h>
int main()
{
	int a=1234;
	int ans=0;
	while(a>0)
	{
		ans+=a%10;
		a/=10;
	}
	printf("%d",ans);
}