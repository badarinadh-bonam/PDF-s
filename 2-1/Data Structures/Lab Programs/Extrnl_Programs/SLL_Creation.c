#include <stdio.h>
#include <stdlib.h>

void creation();
void traversal();

struct node{
    int data;
    struct node* link;
}*head,*ptr,*new;

int main(){
    int ch;
    head=(struct node*)malloc(sizeof(struct node));
    head->link=NULL;
    while(1){
        printf("Enter the choioce of operation: 1.Creation 2.Traversal");
        scanf("%d",&ch);
        switch(ch){
            case 1:creation();
                break;
            case 2:traversal();
                break;
            default:exit(0);
                break;
        }
    }
    return 0;
}
void creation(){
    new=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter the data value");
    scanf("%d",&x);
    if(head->link==NULL){
        head->link=new;
        new->link=NULL;
        new->data=x;
    }else{
        ptr=head;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }ptr->link=new;
        new->link=NULL;
        new->data=x;
    }
}
void traversal(){
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
        printf("%d\t",ptr->data);
    }
}

