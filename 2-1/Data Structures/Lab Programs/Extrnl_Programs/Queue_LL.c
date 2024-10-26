#include <stdio.h>
#include <stdlib.h>

void enqueue(item);
void dequeue();
void traverse();

struct node{
    int data;
    struct node* link;
}*head,*front,*rear,*ptr,*new;

int main(){
    int ch,item;
    head=(struct node*)malloc(sizeof(struct node));
    head->link=NULL;
    front=NULL;
    rear=NULL;
    while(1){
        printf("Enter the choice of operation 1.enqueue 2.dequeue 3.traverse");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Enter the item");
                scanf("%d",&item);
                enqueue(item);
                break;
           case 2:dequeue();
                break;
            case 3:traverse();
                break;
            default: exit(0);
                break;
        }
    }
    return 0;
}
void enqueue(int item){
    new=(struct node*)malloc(sizeof(struct node));
    if(front==NULL && rear==NULL){
        head->link=new;
        new->link=NULL;
        new->data=item;
        front=head->link;
    }else{
        rear->link=new;
        new->link=NULL;
        new->data=item;
        rear=rear->link;
    }
}void dequeue(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty");
    }else{
        if(front==rear){
            head->link=front->link;
            printf("Deleted item: %d",front->data);
            front=rear=NULL;
        }else{
            head->link=front->link;
            printf("Deleted item: %d",front->data);
            free(front);
            front=head->link;
        }
    }
}
void traverse(){
    if(front==NULL && rear==NULL){
        printf("Queue is empty");
    }else{
        ptr=head;
        while(ptr->link!=NULL){
            ptr=ptr->link;
            printf("%d\t",ptr->data);
        }
    }
}