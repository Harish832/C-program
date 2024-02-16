#include <stdio.h>
int main() {
    int arr[8]={-1,2,3,4,5,6,7,9},i,j,min=arr[0],ind,max=arr[0],neg=0;
    if(arr[0]<0){
        neg++;
    }
    for(i=0;i<8;i++){
        min=arr[i];
        ind=i;
        for(j=i+1;j<8;j++){
           if(i==0&&arr[j]<0){
               neg++;
           }
           if(arr[j]<min){
               min=arr[j];
               ind=j;
           } 
        }
        arr[ind]=arr[i];
        arr[i]=min;
    }
    if(neg==0){
        printf("(%d,%d,%d)=%d",arr[0],arr[1],arr[2],arr[0]*arr[1]*arr[2]);
    }
    else if(neg==1||neg==2){
        printf("(%d,%d,%d)=%d",arr[0],arr[7],arr[6],arr[0]*arr[7]*arr[6]);
    }
    else if(neg>=3){
        if(arr[0]*arr[1]*arr[2]<arr[0]*arr[7]*arr[6]){
            printf("(%d,%d,%d)=%d",arr[0],arr[1],arr[2],arr[0]*arr[1]*arr[2]);
        }
        else{
            printf("(%d,%d,%d)=%d",arr[0],arr[7],arr[6],arr[0]*arr[7]*arr[6]);
        }
    }
}