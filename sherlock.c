#include<stdio.h>
#include<math.h>
int squares(int a,int b){
	int k,c=0;
	for(int i=sqrt(a);i<=sqrt(b);i++){
		k=i*i;
		if(k>=a && k<=b)
			c++;
		return c;
	}
}
int main() {
	int q;
	scanf("%d", &q);
	for(int a0=0;a0<q;a0++){
	int a,b;
	scanf("%d %d", &a, &b);
	int result =sqrt(a,b);
	pritnf("%d\n",result);
	}
	return 0;
}