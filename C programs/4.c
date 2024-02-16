#include <stdio.h>

int main() {
    int i,j,arr[5]={1,2,4,5,9};
    for(i=0;i<5;i++){
        if(arr[i]+1==arr[i+1]){
            printf("%d->%d\n",arr[i],arr[i+1]);
        }
    }
}