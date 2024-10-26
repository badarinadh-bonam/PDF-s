#include <stdio.h>
int main(){
    int i,sb,len,f[50],c;
    for(i=0;i<50;i++){
        f[i]=0;
    }
    do{
        printf("Enter the starting Block and length");
        scanf("%d%d",&sb,&len);
        for(i=sb;i<(sb+len);i++){
            if(f[i]==0){
                f[i]=1;
                printf("%d->%d\n",i,f[i]);
            }else{
                printf("Block aldredy allocated");
                break;
            }
        }if(i==(sb+len)){
            printf("File allocated");
        }printf("Do you want to continue(1/0)");
        scanf("%d",&c);
    }while(c==1);
}