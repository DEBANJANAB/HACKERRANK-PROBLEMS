#include<stdio.h>
int main(){
	int n,k,c;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++){
		int a[100];
		scanf("%d",&a[i]);
	}
	int temp=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>temp)
			temp=a[i];
	}
	c=temp-k;
	if(c<0){
		c=0	
	}
	printf("%d\n",c);
	return 0
}