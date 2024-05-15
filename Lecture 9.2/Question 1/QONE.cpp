#include <stdio.h>
#include <string.h>
int main() {
    char arr[20];
    int L=0,ucl=0,lcl=0,doan=0,osc=0;
    printf("This is a Program to check if a given password is strong or not by satisfying the below criteria:\n\n");
    printf("Create your password: ");
    fgets(arr,20,stdin);
    L=strlen(arr);
    for(int x=0; arr[x]!='\0';x++){
        if(arr[x]>=65&&arr[x]<=90){
            ucl++;
        }
        if(arr[x]>=97&&arr[x]<=122){
            lcl++;
        }
        if(arr[x]>=48&&arr[x]<=57){
            doan++;
        }
        if(arr[x]>=33&&arr[x]<=47||arr[x]>=58&&arr[x]<=64||arr[x]>=123&&arr[x]<=126){
            osc++;
        }
    }
    if(L>0&&ucl>0&&lcl>0&&doan>0&&osc>0){
        printf("\nYour password is Strong.");
    }else{
        printf("\nYour password is not Strong.");
    }
}