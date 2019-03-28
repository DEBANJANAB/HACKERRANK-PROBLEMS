#include<stdio.h>
int main(){
    int a[1000],i,n;
    long long int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%llu",sum);

    return 0;
}

