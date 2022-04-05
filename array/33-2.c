#include <stdio.h>
    int main(){
        int n;
        int A[102][102]={};
        int intersection=0;
        int Tjunction=0;
        int turn=0;
        int deadend=0;
        scanf("%d",&n);
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                scanf("%d",&A[i][j]);
            }
        }
        for(int i=0;i<n+2;i++){
            for(int j=0;j<n+2;j++){
                if((A[i][j] == 1) && (A[i-1][j] ==1) && (A[i][j-1] ==1) && (A[i][j+1] ==1) && (A[i+1][j] ==1) )   
                    intersection++;
                if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] + A[i+1][j] ==3 ))
                    Tjunction++;
                if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] + A[i+1][j] ==2  ) && (A[i-1][j] + A[i+1][j] !=2 )&& (A[i][j-1] + A[i][j+1] !=2))
                    turn++;
                if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] + A[i+1][j] ==1 ))
                    deadend++;
            }
        }
    
        printf("%d\n%d\n%d\n%d",intersection,Tjunction,turn,deadend);
        return 0;
    }
