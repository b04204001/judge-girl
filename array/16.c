#include <stdio.h>
    int main(){
        int n;
        int A[1000];
        int odd[1000],even[1000];
        int j=0;
        int k=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        for(int i=0;i<n;i++){
            if(A[i] %2 ==0){
                even[j] = A[i];
                j++;
            }
            else{
                odd[k] = A[i];
                k++;
            }

        }
        for(int i =0;i<(k-1);i++){
            printf("%d ",odd[i]);
            
        }
            printf("%d\n",odd[k-1]);
        for(int i =0;i<(j-1);i++){
            printf("%d ",even[i]);
        }
            printf("%d",even[j-1]);
        return 0;
    }