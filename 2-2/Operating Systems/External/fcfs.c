/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void  main()
{
    float avgtat=0,avgwt=0,totalwt=0,totaltat=0;
    int at[100]={0},bt[100]={0},ct[100]={0},tat[100]={0},wt[100]={0};
    int m=0,n,i,j,k,l;
    printf("enter no.of process:");
    scanf("%d",&n);
    printf("enter arrival and burst time of process");
    for(i=0;i<n;i++)
    {
        printf("for p[%d]",i+1);
        scanf("%d",&at[i]);
        scanf("%d",&bt[i]);
    }
    for(j=0;j<n;j++)
    { 
        ct[j]=bt[j]+m;
        m=ct[j];
    }
    for(k=0;k<n;k++)
    {
        tat[k]=ct[k]-at[k];
        totaltat+=tat[k];
        wt[k]=tat[k]-bt[k];
        totalwt+=wt[k];
    }
    printf("P.No \t\t AT \t\t BT \t\t CT \t\t TAT \t\t WT  \n");
    for(l=0;l<n;l++)
    {
       printf("P[%d] \t\t %d \t\t %d \t\t %d \t\t %d \t\t %d \n",l+1,at[l],bt[l],ct[l],tat[l],wt[l]); 
    }
    avgtat=totaltat/n;
    avgwt=totalwt/n;
    printf("Average TAT is %f \n",avgtat);
    printf("Average WT is %f \n",avgwt);
    
    
}

