#include <stdio.h>
#include <stdlib.h>

void creation();
void traversal();

struct node{
    int data;
    struct node* link;
}*head,*new,*ptr;

void main(){
    int ch=0;
    head=(struct node*)malloc(sizeof(struct node));
    head->link=NULL;
    while(ch<3){
        printf("Enter your choice of operation 1.Creation 2.Traversal\n");
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
}
void creation(){
    int x;
    printf("Enter the data value to insert\n");
    scanf("%d",x);
    new=(struct node*)malloc(sizeof(struct node));
    if(head->link==NULL){
        head->link=new;
        new->data=x;
        new->link=NULL;
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