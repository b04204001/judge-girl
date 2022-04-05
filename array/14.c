#include <stdio.h>
    int main() {
        int n;
        int A[1000];
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        for(int i=n-1;i>0;i--){
            printf("%d ",A[i]);
        }
        printf("%d",A[0]);
        return 0;
    }