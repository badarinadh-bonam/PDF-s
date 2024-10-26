#include <stdio.h>
int BinaryRec(int [],int,int,int,int);
int main(){
    int arr[20],ele,len,flag=0;
    printf("Enter the number of elements");
    scanf("%d",&len);
    printf("Enter the elements");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }printf("Enetr the element to search");
    scanf("%d",&ele);
    flag=BinaryRec(arr[20],len,ele,0,len-1);
    if(flag==0){
        printf("Element not found");
    }else{
        printf("succesful seach");
    }
    getch();
}
int BinaryRec(int a[],int ele,int len,int first,int last){
    int mid;
        mid=(first+last)/2;
    if(first<=last){
        if(ele==a[mid]){
            printf("Successful Search at %d",mid);
            return 1;
        }else if(ele>a[mid]){
            BinaryRec(a,ele,len,mid+1,last);
        }
        else if(ele<a[mid]){
            BinaryRec(a,ele,len,first,mid-1);
        }
    }
}