#include <stdio.h>
    int main(){
        int r,c; //r列c行
        int A[100][100];
        int M[100];
        scanf("%d %d",&r,&c);
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                scanf("%d",&A[i][j]);
            }
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                M[i] += (A[j][i] );
            }
        }
        for(int i=0;i<c;i++){
            M[i] = M[i] / r;
        }
        for(int i=0;i<c-1;i++)
            printf("%d\n",M[i]);
        printf("%d",M[c-1]);
        return 0;
    }