#include <stdio.h>
int main() {
    char str[]="i# like to have a tea",temp;
    int i=0,j=strlen(str)-1;
    while(i<j){
        if((str[i]>64&&str[i]<91||str[i]>96&&str[i]<123)&&(str[j]>64&&str[j]<91||str[j]>96&&str[j]<123)){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
        }
        else if(str[i]==' '){
            i++;
        }
        else if(str[j]==' '){
            j--;
        }
        else if(str[i]<65){
            i++;
        }
        else if(str[j]<65){
            j--;
        }
    }
    for(i=0;i<strlen(str);i++){
        printf("%c",str[i]);
    }
    return 0;
}