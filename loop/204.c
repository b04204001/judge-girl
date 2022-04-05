#include <stdio.h>
    int main(){
        int A[105][105];
        int B[401];
        int W,D;
        int R;
        int T=0;
        scanf("%d %d",&W,&D);  //j xi
        for(int i=0;i<D;i++){
            for(int j=0;j<W;j++){
                scanf("%d",&A[i][j]);
            }
        }
        //往右上走，i-- j++  
        //往左下走, 
        //0 : 上  1:右
        for(int j=0;j<W;j++){
            int k=D-1;
            if (j==W-1){
                while(A[k][j] !=1){
                    if(k == 0){
                        break;
                    }
                    k--;
                }
                B[] =  ;
                B[] = D;
            }
            else {
                while(j != W-1 ){
                    if(A[k][j] ==1 && T==0){
                        k--;
                        T = (T+1) %2;
                        //break;
                    }
                    if (A[k][j] ==1 && T==1){
                        j--;
                        T = (T+1) %2;
                        
                    }
                    /*if(T==0){
                        k--;
                    }
                    if(T==1){
                        j--;
                    }*/
                }
                B[]= ;
                B[] =;
            }
        }
        //往右上走
        //i=w
        //最下排

        //右邊對稱下面
        //左下走
        //最右排
        //j=D

        //0 : 右  1:上
        for(int i=0;i<D;i++){
            int l= 0;
            if (i==0){
                while(A[i][l] !=1){
                    if(l == W-1){
                        break;
                    }
                    l++;

                }
                B[] =  ;
                B[] = ;
            }
            else {
                while(i!=0){
                    if(A[i][l] ==1 && T==0){
                        l++;
                        T = (T+1) %2;
                    }
                    if (A[i][l] ==1 && T==1){
                        i--;
                        T = (T+1) %2;
                    }
                    /*if(T==0){
                        l++;
                    }
                    if(T==1){
                        i--;
                    }*/
                    
                }
                B[]= ;
                B[] = ;
            }
        }
        //右上走
        //最左排
        //j=0

        //上面對稱左邊
        //左下走
        //最上排
        //i=0
        R= 2*(W+D);
        for(int i=0;i<R;i++){
            printf("%d\n",B[i]);
        }

        
        return 0;
    }

    //output 2(W+D)
    //worng