#include <stdio.h>
    int main(){
        int n,m,o,i;
        int A[200000];
        int B[200000];
        scanf("%d",&n);
        for(i=0;i<200000;i++){
            B[i]=0;
        }
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        scanf("%d",&m);
        for(i=0;i<n;i++){
            o = A[i] % m;
            B[o]++;
        }
        for(i=0;i<m;i++){
            printf("%d\n",B[i]);
        }

        return 0;
    }