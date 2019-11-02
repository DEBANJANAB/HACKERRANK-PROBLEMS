#include<stdio.h>

int main(){
	int i,n,h,height=-1,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&h);
		if(h>height)
		{
			height=h;
			cnt=1;
		}
		else if(h==height)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
