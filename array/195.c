#include <stdio.h>
    int main(){
        int N;
        int A[1001][2]; // x y
        int T[3][3] = {};
        int now = 0;
        scanf("%d",&N);
        for(int i =0;i<N;i++){
            scanf("%d%d",&A[i][0],&A[i][1]);
        }
        for(int i =0;i<N;i++){
            if(( A[i][0] >=0 ) && ( A[i][0] <=2 ) && (A[i][1] >=0) && (A[i][1] <=2) ) {
                if (T[ A[i][0] ][ A[i][1]  ] == 0){

                    if( now==0){
                        T[ A[i][0] ][ A[i][1]  ] = now +1;
                        now=(now+1)%2;
                    }
                    else{
                        T[ A[i][0] ][ A[i][1]  ] = now+1;
                        now=(now+1)%2;
                    }
                }
                
            if( (T[0][0] == 1) && ( T[0][1]  == 1 ) && ( T[0][2] == 1 ) ){
                printf("Black wins.");
                return 0;}
            if((T[1][0] == 1) && ( T[1][1]  == 1 ) && ( T[1][2] == 1 )){
                printf("Black wins.");
                return 0;}
            if((T[2][0] == 1) && ( T[2][1]  == 1 ) && ( T[2][2] == 1 )){
                printf("Black wins.");
                return 0;}
            if((T[0][0] == 1) && ( T[1][0]  == 1 ) && ( T[2][0] == 1 )){
                printf("Black wins.");
                return 0;}
            if((T[0][1] == 1) && ( T[1][1]  == 1 ) && ( T[2][1] == 1 )){
                printf("Black wins.");
                return 0;}
            if((T[0][2] == 1) && ( T[1][2]  == 1 ) && ( T[2][2] == 1 )){
                printf("Black wins.");
                return 0;}
            if((T[0][0] == 1) && ( T[1][1]  == 1 ) && ( T[2][2] == 1 )){
                printf("Black wins.");
                return 0;}
            if((T[0][2] == 1) && ( T[1][1]  == 1 ) && ( T[2][0] == 1 )){
                printf("Black wins.");
                return 0;}
            if((T[0][0] == 2) && ( T[0][1]  == 2 ) && ( T[0][2] == 2 )){
                printf("White wins.");
                return 0;}
            if((T[1][0] == 2) && ( T[1][1]  == 2 ) && ( T[1][2] == 2 )){
                printf("White wins.");
                return 0;}
            if((T[2][0] == 2) && ( T[2][1]  == 2 ) && ( T[2][2] == 2 )){
                printf("White wins.");
                return 0;}
            if((T[0][0] == 2) && ( T[1][0]  == 2 ) && ( T[2][0] == 2 )){
                printf("White wins.");
                return 0;}
            if((T[0][1] == 2) && ( T[1][1]  == 2 ) && ( T[2][1] == 2 )){
                printf("White wins.");
                return 0;}
            if((T[0][2] == 2) && ( T[1][2]  == 2 ) && ( T[2][2] == 2 )){
                printf("White wins.");
                return 0;}
            if((T[0][0] == 2) && ( T[1][1]  == 2 ) && ( T[2][2] == 2 )){
                printf("White wins.");
                return 0;}
            if((T[0][2] == 2) && ( T[1][1]  == 2 ) && ( T[2][0] == 2 )){
                printf("White wins.");
                return 0;}
            }
        }
        
          
        printf("There is a draw.");  
        return 0;
    }
