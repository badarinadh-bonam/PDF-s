#include <stdio.h>
int main(){
    int i,n,m=0;
    int at[10],bt[10],ct[10],tat[10],wt[10];
    float tottt=0,totwt=0,avgtt=0,avgwt=0;
    printf("Enter the number of processes");
    scanf("%d",&n);
    printf("ENter the arrival times of processes");
    for(i=0;i<n;i++){
        scanf("%d",&at[i]);
    }printf("ENter the burst times of processes");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }for(i=0;i<n;i++){
        ct[i]=bt[i]+m;
        m=ct[i];
    }for(i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        tottt=tottt+tat[i];
        totwt=totwt+wt[i];
    }
    avgtt=tottt/n;
    avgwt=totwt/n;
    printf("PID\t\tAT\t\tBT\t\tCT\t\tTAT\t\tWT\n");
    for(i=0;i<n;i++){
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    printf("AVerage tat time is %f\n",avgtt);
    printf("AVerage waiting time is %f\n",avgwt);
}