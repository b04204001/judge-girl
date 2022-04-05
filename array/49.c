#include <stdio.h>
    int main(){
        int N,m;
        int A[1000][3] = {};  // sum min max
        int B[10000] = {}; // 真樹  
        int tmp;
        //int min =2147483647;
        //int max =-2147483648;
        //N<10000 
        scanf("%d %d",&N,&m);    //N數  m組
        //printf("%d %d",N,m);
        for(int i=0;i<N;i++){
            scanf("%d",&B[i]);
            //printf("%d",B[i]);
        }
        for (int i=0;i<1000;i++){
            A[i][0]= 0;
            A[i][1]= 2147483647;
            A[i][2]= -2147483648;
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<N;i++){
                tmp = B[i] %m;
                if(tmp == j){
                    A[j][0] += B[i];
                    if(B[i] <   A[j][1])
                        A[j][1] = B[i];
                    if(B[i] > A[j][2] )
                        A[j][2] = B[i];
                    //printf("%d %d %d\n",A[j][0],A[j][1],A[j][2]);
                }
            
            }
            printf("%d %d %d\n",A[j][0],A[j][2],A[j][1]);
        }
        
        return 0;
    }
