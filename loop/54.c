#include <stdio.h>
    int main(){
        int x,y;
        int i=0;
        int A[7],B[2];
        int j;
        int r=0;
        scanf("%d%d",&x,&y);
        B[0] = x%10;
        B[1] = x/10;
        while(y != 0){
            A[i]= y%10;
            i++;
            y/=10;
        }
        for(j = 0; j<i;j++){
            if(A[j] == B[0] && A[j+1] == B[1])
                r++;
        }
        printf("%d",r);




        return 0;
    }