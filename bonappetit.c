#include<stdio.h>
int main() {
	int i,n,k,sum=0,p;
	unsigned long long int  a[1000000];
	scanf("%d %d",&n, &k);
	for(i=0;i<n;i++) {
		scanf("%lld",&a[i]);
		if(i==k) {
			sum=sum+0;
	}	else{
			sum=sum+a[i]; 
		}
	}
	sum=sum/2;
	scanf("%d",&p);
	if((p-sum)==0)
		printf("Bon Appetit");
	else
		printf("%d",p-sum);
	return 0;
}	

