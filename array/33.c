#include <stdio.h>
    int main(){
        int n;
        int A[100][100];
        int intersection=0;
        int Tjunction=0;
        int turn=0;
        int deadend=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&A[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if((i-1>0) && (j-1>0) && (i+1 <n-1) && (j+1 <n-1)){ //四項存在 中間
                    if((A[i][j] == 1) && (A[i-1][j] ==1) && (A[i][j-1] ==1) && (A[i][j+1] ==1) && (A[i+1][j] ==1) )   
                        intersection++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] + A[i+1][j] ==3 ))
                        Tjunction++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] + A[i+1][j] ==2  ) && (A[i-1][j] + A[i+1][j] !=2 || A[i][j-1] + A[i][j+1] !=2))
                        turn++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] + A[i+1][j] ==1 ))
                        deadend++;
                }
                
                if(( i == 0) && (j-1>0) && (j+1 <n-1)){ //貼上
                    if((A[i][j] == 1) && ( A[i][j-1] + A[i][j+1] + A[i+1][j] ==3 ))
                        Tjunction++;
                    if((A[i][j] == 1) && (A[i][j-1] + A[i][j+1] + A[i+1][j] ==2) && ( (A[i][j-1] + A[i][j+1]) !=2))
                        turn++;
                    if((A[i][j] == 1) && (A[i][j-1] + A[i][j+1] + A[i+1][j] ==1 ))
                        deadend++;
                }

                if((i == 0) && (j == 0) ){ //左上
                    if((A[i][j] == 1) && (A[i][j+1] + A[i+1][j] ==2  ))
                        turn++;
                    if((A[i][j] == 1) && (A[i+1][j] + A[i][j+1]  ==1 ))
                        deadend++;
                }

                if((i-1 >0) && (j == 0) && (i+1 <n-1) ){ //貼左
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j+1] + A[i+1][j] ==3 ))
                        Tjunction++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j+1] + A[i+1][j] ==2) && (A[i-1][j] + A[i+1][j] !=2))
                        turn++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j+1] + A[i+1][j] ==1 ))
                        deadend++;
                }

                if((i == n-1) && (j == 0) ){ //左下
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j+1]  ==2  ) )
                        turn++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j+1]  ))
                        deadend++;
                }

                if( (j-1>0) && (i == n-1) && (j+1 <n-1)){ //貼下
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] ==3 ))
                        Tjunction++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] ==2) && ( A[i][j-1] + A[i][j+1]  !=2 ))
                        turn++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i][j+1] ==1 ))
                        deadend++;
                }

                if((i == n-1) && (j == n-1) ){ //右下
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] ==2  ) )
                        turn++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] ==1 ))
                        deadend++;
                }

                if((i-1>0) && (i+1 <n-1) && (j == n-1)){ //貼右
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] +  A[i+1][j] ==3 ))
                        Tjunction++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] +  A[i+1][j] ==2) && (A[i-1][j] + A[i+1][j] !=2  ) )
                        turn++;
                    if((A[i][j] == 1) && (A[i-1][j] + A[i][j-1] + A[i+1][j] ==1 ))
                        deadend++;
                
                if((i == 0) && (j == n-1) ){ //右上
                    if((A[i][j] == 1) && (A[i+1][j] + A[i][j-1]  ==2  ))
                        turn++;
                    if((A[i][j] == 1) && (A[i+1][j] + A[i][j-1]  ==1 ))
                        deadend++;
                }
                }
            }
        }
        printf("%d\n%d\n%d\n%d",intersection,Tjunction,turn,deadend);
        return 0;
    }
