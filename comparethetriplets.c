#include<stdio.h>
int main() {
	int alice[3];
	int bob[3];
	int i;
	scanf("%d %d %d", &alice[0], &alice[1], &alice[2]);
	scanf("%d %d %d", &bob[0], &bob[1], &bob[2]);
	int alice_score = 0;
	int bob_score = 0;
	for(i=0;i<3;i++){
		if(alice[i]>bob[i])
			alice_score++;
		if(bob[i]>alice[i])
			bob_score++;
		}
		printf("%d %d\n", alice_score, bob_score);
		return 0;
}

