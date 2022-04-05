#include <stdio.h>
    int main(){
        int l;
        int A[15][2]={};
        int last;
        int j=0;
        scanf("%d",&l); //曾數
        last = l*(l+1)/2;
        for(int i=0;i<l;i++){
            scanf("%d",&A[i][0],&A[i][1]);
        }
        if(2*j+1 <= last){

            
        }
        return 0;
    }

/*
               0
             1   2
            3 4 5 6
2i+1 左   2i+2右
*/
//wrong