#include<stdio.h>
int main() {
	int d1,m1,y1,d2,m2,y2;
	int fine = 0;
	scanf("%d %d %d ", &d1, &m1, &y1);
	scanf("%d %d %d ", &d2, &m2, &y2);
	if(y2<y1){
		fine = 0;
	}	
	else if(y2>y1){
		fine =  10000;
	}
	else if(y2 == y1){
		if(m2<m1){
			fine = 0;
		}	
		else if(m2<m1){
			fine = 500*(m2-m1);
		}
		else if(m1 ==  m2){
			 if(m2<=m1){
			 	fine = 0;
			 }
		}
			else if(m2>m1){
				fine = 15*(d2-d1);
			}
		}
	}
	
	printf("%d", fine);

	return 0;

}			

		}
	printf("%d\n",fine);	



	

}
