#include <stdio.h>
    int main(){
        int A[105][105];
        int ansi[401];
        int W,D;
        int R;
        int T=0;
        scanf("%d %d",&D,&W);
        for(int i=0;i<W;i++){
            for(int j=0;j<D;j++){
                scanf("%d",&A[i][j]);
            }
        }

        for(int i=0;i<R;i++){
            printf("%d\n",ansi[i]);
        }

        
        return 0;
    }

    //worng