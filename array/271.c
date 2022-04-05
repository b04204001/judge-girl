#include <stdio.h>
    int main(){
        int a,b;
        int c=0;
        int A[100]={};
        int B[100]={};
        int C[200]={};
        /*for(int i=0;i<100;i++){
            A[i]=0;
            B[i]=0;
            C[i]=0;
        }*/
        scanf("%d",&a);
        for(int i=a-1;i>=0;i--){
            scanf("%d",&A[i]);
        }
        scanf("%d",&b);
        for(int i=b-1;i>=0;i--){
            scanf("%d",&B[i]);
        }
        c = a+b-1;
        /*for(int i=0;i<c;i++){
            for(int j=0;j<a;j++){
                for(int k=0;k<b;k++) {  
                    if(j + k == i)
                        C[i] += A[j] * B[k];
                }
            }
        }
        */
        for(int j=0;j<a;j++){
            for(int k=0;k<b;k++) {
                C[j+k] += A[j] * B[k];
            }
        }
        /*for(int i=c-1;i>=0;i--)
            printf("%d ",C[i]);
        
        */
        for(int i=c-1;i>=0;i--)
            printf("%d%c",C[i],(i>0)? ' ' : '\n');
        return 0;
    }

