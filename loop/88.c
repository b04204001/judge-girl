#include <stdio.h>
    int main(){
        int x,y;
        int a=0;
        int b=0;
        int A[4],B[4];
        int i,j;
        scanf("%d%d",&x,&y);
        for(i=0;i<4;i++){
            A[i] = x%10;
            B[i] = y%10;
            x/=10;
            y/=10;
        }
        for(i=0;i<4;i++)
            for(j=0;j<4;j++){
                if(A[i] == B[j] && i != j)
                    b++;
                if(A[i] == B[j] && i == j)
                    a++;
            }        
        printf("%dA%dB",a,b);

        return 0;
    }

