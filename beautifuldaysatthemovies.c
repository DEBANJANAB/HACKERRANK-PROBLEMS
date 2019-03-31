#include<stdio.h>
int rev(int n){
	int r=0,rem;
	while(n!=0){
			rem=n%10;
			r=r*10+rem;
			n=n/10;
	}
	return r;
}
int main() {
		int i,j,count=0;
		long int k;
		scanf("%d %d %d", &i, &j, &k);
		for(int a=i;a<=j;a++){
			double div;
			if((div=(a-rev(a))%k)==0)
				count++;

		}
		printf("%d\n", count);
		return 0;
}