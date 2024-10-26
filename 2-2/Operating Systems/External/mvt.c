#include <stdio.h>
int main(){
    int totmem,allocmem[10],temp,i,n=0;
    char ch='y';
    printf("Enter the total memory avalibale");
    scanf("%d",&totmem);
    temp=totmem;
    for(i=0;ch=='y';i++,n++){
        printf("Enter the memory required for process %d",i+1);
        scanf("%d",&allocmem[i]);
        if(allocmem[i]<=temp){
            printf("Memory allocated");
            temp=temp-allocmem[i];
        }else{
            printf("Memory Full");
            break;
        }
        printf("Do you want to continue(y/n):");
        scanf("%c",&ch);
    }
    printf("Total memory Available %d\n",totmem);
    printf("Process Id\t\tMemory Allocated\n");
    for(i=0;i<n;i++){
        printf("%d\t\t%d\n",i+1,allocmem[i]);
    }
    printf("Total Memory Allocatd %d",totmem-temp);
    printf("external fragmentation %d",temp);

}