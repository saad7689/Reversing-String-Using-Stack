//stackproblem.c -- Lab 02 -- Saad, Rizvi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 81
char A[MAX];
int top = -1;


void push(char x){
    if(top == MAX - 1){
        printf("STACK OVERFLOW");
        return;
    }
    A[++top] = x;
}

char pop(){
    if(top==-1) exit;
    char x;
    x = A[top];
    top--;
    return x;
}

int main(){
    char x[MAX];
    printf("Enter a string of characters to reverse: ");
    gets(x);

    for(int i=0; i<strlen(x); i++){
        push(x[i]);
    }
    for(int i=0; i<strlen(x); i++){
        x[i]=pop();
    }

    printf("Reversed String: %s", x);

}