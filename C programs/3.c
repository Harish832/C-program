#include <stdio.h>
#include <string.h>

int main() {
    int i,j=0,k;
    char str1[15]="Hello",str2[]="ones";
    k=strlen(str1);
    if(str1[strlen(str1)-1]==str2[0]){
        j=1;
    }
    for(i=j;i<strlen(str2);i++){
        str1[k]=str2[i];
        k++;
    }
    str1[k]='\0';
    printf("%s",str1);
}