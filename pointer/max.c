int max(int *iptr[], int n){
    int max;
    max = *iptr[0];
    for(int i=0;i<n;i++){
        if(*iptr[i]>max)
            max =*iptr[i];
    }
    return max;
}