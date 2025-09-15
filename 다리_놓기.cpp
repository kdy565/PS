#include <stdio.h>

long C[31][31];

int combi(int n, int r)
{
    if(n == r || r == 0){
        C[n][r]=1;
    }
    if(C[n][r]==0){
        C[n][r]=combi(n-1, r-1) + combi(n-1, r);
    }
    return C[n][r];
}

int main(){
    int k;
    scanf("%d",&k);
    for (int i=0;i<k;i++){
        int n, m;
        scanf("%d %d\n",&n, &m);
        printf("%d\n",combi(m,n));
    }    
}