#include<stdio.h>
int main() {
	int n,k,i,j,a[100],count=0;
    scanf("%d%d",&n, &k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++){
		count+=((a[i]+a[j])%k == 0);
	}
    }
	printf("%d",count);
	return 0;
}

