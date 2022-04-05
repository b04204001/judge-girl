#include <stdio.h>
    int main(){
        int A[100];
        int x;
        scanf("%d",&x);
        for(int i=0;i<x;i++){
            scanf("%d",&A[i]);
        }

        return 0;
    }
 
//wrong  喔我記錯ㄌ 擬就判斷 當前指針指到的那個點 往左往右 判斷
// 跑每一點 往左右掌回文 看最大長度

//暫時跳過
