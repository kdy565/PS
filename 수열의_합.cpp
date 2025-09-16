#include <stdio.h>

int sol(int n, int l);

int main(){
    int n,l;
    scanf("%d %d",&n,&l);
    sol(n,l);
    return 0;
}

int sol(int n, int l){
    for(;l<=100;l++){
        if(2*n%l==0){
            int s=2*n/l;
            if((l%2==0 && s%2==1)||l%2==1){
                if(s-l+1>=0){
                    for(int i=0;i<l;i++){
                        printf("%d ",(s-l+1)/2+i);
                    }
                    return 0;
                }
            }
        }
    }
    printf("-1");
    return 0;
}