#include <stdio.h>
#include <string.h>

int main(){
    printf("calculator in C!\n");
    char type[100];
    int num1;
    int num2;
    int result;
    printf("what do you want to do:\n1.add\n2.sub\n3.div\n4.multi");
    printf("\nenter here : ");
    scanf("%s",&type);
    printf("\nenter the first number : ");
    scanf("%d",&num1);
    printf("\nenter the second number : ");
    scanf("%d",&num2);
    if(strcmp(type,"add") == 0){
        result = num1 + num2;
    }else if (strcmp(type,"sub") == 0){
       result = num1 - num2;
    }else if (strcmp(type,"multi") == 0){
       result = num1 * num2;
    }else if (strcmp(type,"div") == 0){
       result = num1 / num2;
    }else{
        printf("invalid!");
    }
    printf("the answer is : %d\n",result);
    int ex;
    scanf("%d",ex);
    return 0;
}