#include <stdio.h>
    int main(){
        int r,c; //r列c行
        int A[100][100];
        int M[10000]={};
        int k=0;
        scanf("%d %d",&r,&c);
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++){
                scanf("%d",&A[i][j]);
            }
        for(int i=0;i<r;i++){    
            for(int j=0;j<c;j++){
                if(i==0 && j==0){ //左上
                    if( A[i][j]>A[i][j+1] && A[i][j]>A[i+1][j]){
                        M[k] = A[i][j];
                        k++;
                    }
                }
                if(i==0 && j!=0 && j!= (c-1) ){ //上非角
                    if( A[i][j]>A[i][j-1] && A[i][j]>A[i][j+1] && A[i][j]>A[i+1][j]){
                        M[k] = A[i][j];
                        k++;
                    }
                }
                if(i==0 && j== c-1){  //右上
                    if(A[i][j]>A[i][j-1] && A[i][j]>A[i+1][j]){
                        M[k] = A[i][j];
                        k++;
                    }
                }
                if(i!=0 && i!= r-1 && j== c-1){  //右非角
                    if(A[i][j]>A[i-1][j] && A[i][j]>A[i][j-1] && A[i][j]>A[i+1][j]){
                        M[k] = A[i][j];
                        k++;
                    }
                }
                if(i== r-1 && j== c-1){  //右下
                    if(A[i][j]>A[i+1][j] && A[i][j]>A[i][j-1] ){
                        M[k] = A[i][j];
                        k++;
                    }
                }
                if(i== r-1 && j!=0 && j!= c-1){  //下非角
                    if(A[i][j]>A[i-1][j] && A[i][j]>A[i][j+1] && A[i][j]>A[i][j-1]){
                        M[k] = A[i][j];
                        k++;
                    }
                }
                if(i== r-1 && j== 0){  //左下
                    if(A[i][j]>A[i-1][j] && A[i][j]>A[i][j+1] ){
                        M[k] = A[i][j];
                        k++;
                    }
                }
                if (i !=0 && i != r-1 && j == 0){ //左非角
                    if(A[i][j]>A[i-1][j] && A[i][j]>A[i][j+1] && A[i][j]>A[i+1][j]){
                        M[k] = A[i][j];
                        k++;  
                    }
                }
                if (i != 0 && j != 0 && i != r-1 && j != c-1){ //中間
                         if(A[i][j]>A[i-1][j] && A[i][j]>A[i][j-1] && A[i][j]>A[i][j+1] && A[i][j]>A[i+1][j]){
                        M[k] = A[i][j];
                        k++;
                    }
                }
                    
            }
        }
        for(int i=0;i<k;i++)
            printf("%d\n",M[i]);
        return 0;
    }
    //wrong 70