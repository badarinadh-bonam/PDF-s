#include <stdio.h>
int main(){
    int arr[20],ele,len,flag=0,i;
    printf("Enter the number of elements");
    scanf("%d",&len);
    printf("Enter the elements");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }printf("Enetr the element to search");
    scanf("%d",&ele);
    flag=linearRec(arr[20],len,ele,0);
    if(flag==0){
        printf("Element not found");
    }else{
        printf("succesful seach");
    }
}
int linearRec(int a[],int len,int ele,int i){
    if(a[i]==ele){
        printf("Element was found at %d index",i);
        return 1;
    }else{
        i+=1;
        linearRec(a,len,ele,i);
        return 0;
    }
}