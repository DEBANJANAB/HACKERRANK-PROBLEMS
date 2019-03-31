#include<stdio.h>
#include<stdlib.h>
int main() {
	int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int x, y ,z;
	scanf("%d %d %d", &x, &y, &z);
        
		if(abs(x-z) == abs(y-z)){
			printf("Mouse C\n");
		}
		else if(abs(y-z) < abs(x-z)){
			printf("Cat B\n");
		}
		else {
			printf("Cat A\n");
		}
    }       
		return 0;
} 

