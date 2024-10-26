#include <stdio.h>
#include <stdlib.h>

void creation();
void traversal();
void deletion();

struct node{
    int data;
    struct node* link;
}*head,*ptr,*new,*ptr1;

int main(){
    int ch;
    head=(struct node*)malloc(sizeof(struct node));
    head->link=NULL;
    while(1){
        printf("Enter the choioce of operation: 1.Creation 2.Deletion 3.Traversal");
        scanf("%d",&ch);
        switch(ch){
            case 1:creation();
                break;
            case 2:deletion();
                break;
            case 3:traversal();
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
void deletion(){
    int pos,key;
    printf("enter the position: 1.beginning 2.ending 3.any position ");
    scanf("%d",pos);
    if(pos==1){
        if(head->link==NULL){
            printf("SLL is empty.Deletion cannot be happened");
        }else{
            ptr=head;
            ptr1=ptr;
            ptr=ptr->link;
            ptr1->link=ptr->link;
            printf("Element deleted: %d",ptr->data);
            free(ptr);
        }
    }else if(pos==2){
        if(head->link==NULL){
            printf("SLL is empty.Deletion cannot be happened");
        }else{
            ptr=head;
            ptr1=ptr;
            ptr=ptr->link;
            while(ptr->link!=NULL){
                ptr1=ptr;
                ptr=ptr->link;
            }ptr1->link=ptr;
            printf("Element deleted: %d",ptr->data);
            free(ptr);
        }

    }
    else if(pos==3){
        if(head->link==NULL){
            printf("SLL is empty.Deletion cannot be happened");
        }else{
            printf("Enter the key value:");
            scanf("%d",key);
            ptr=head;
            ptr1=ptr;
            ptr=ptr->link;
            while(ptr->data!=key && ptr->link!=NULL){
                ptr1=ptr;
                ptr=ptr->link;
            }ptr1->link=ptr->link;
            printf("Element deleted: %d",ptr->data);
            free(ptr);
        }
    }
}
void traversal(){
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
        printf("%d\t",ptr->data);
    }
}