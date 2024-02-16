#include <stdio.h>
int main() {
    int arr[8]={4,5,3,2,6,1,7,8},diff=2,count=0,i=0,j=1;
    while(i<8){
        if(arr[i]+diff==arr[j]&&j<8){
            printf("%d,%d\n",arr[j],arr[i]);
            j++;
            count++;
        }
        else if(arr[i]-diff==arr[j]&&j<8){
            printf("%d,%d\n",arr[i],arr[j]);
            j++;
            count++;
        }
        else if(j==8){
            i++;
            j=i+1;
        }
        else{
            j++;
        }
    }
    printf("%d pairs",count);
}