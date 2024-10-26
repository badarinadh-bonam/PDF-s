#include <stdio.h>

int main() {
    int n;
    printf("\n Enter no of tracks : ");
    scanf("%d",&n);
    int rs[n];
    printf("\n Enter the request sequence : ");
    for(int i=0;i<n;i++){
        scanf("%d",&rs[i]);
    }
    int head;
    printf("\nEnter the head position : ");
    scanf("%d",&head);
    int count=0;
    int diff;
     printf("\nDiffernce between head and the req seq ");
    for(int i=0;i<n;i++){
        diff=abs(head-rs[i]);
        printf("\n%d",diff);
        count=count+diff;
        head=rs[i];
    }
    
    int a_thm = count/n;
    printf("\nTotal head movement is %d ",count);
    printf("\n Avg Total head movement is %d  ",a_thm);
}