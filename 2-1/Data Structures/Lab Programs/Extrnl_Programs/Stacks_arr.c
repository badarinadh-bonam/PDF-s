#include <stdio.h>
#define size 5
int top=-1,arr[5];
void push(int);
void pop();
void traverse();
int main(){
    int ch,item;
    while(1){
    printf("Enter the choich of operation 1.push 2.pop 3.traverse");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("Enter the item: ");
                scanf("%d",&item);
                push(item);
                break;
       case 2:pop();
                break;
        case 3:traverse();
                break;
        default: exit(0);
                break;
    }
        
    }
    return 0;
}
void push(int item){
    if(top>size-1){
        printf("Stack is full");
    }else{
        top+=1;
        arr[top]=item;
    }
}void pop(){
    if(top<0){
        printf("Stack is empty");
    }else{
        printf("Deleted element: %d",arr[top]);
        top-=1;
    }
}void traverse(){
    if(top>size-1){
        printf("Stack is full");
    }else{
        for(int i=0;i<=top;i++){
            printf("%d\t",arr[i]);
        }
    }
}