#include<stdio.h>
void main() 
{
int i,j,n,at[25],bt[25],ct[25],tat[25],wt[25];
int sum=0;
float totwt=0,tottat=0;
printf("Enter the number of processes: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("\nEnter arrival time of process %d: ",i);
    scanf("%d",&at[i]);
    printf("Enter burst time of process %d: ",i);
    scanf("%d",&bt[i]);
}
for(i=0; i<n; i++)
{
sum+=bt[i];
ct[i] += sum;
}
for(i=0;i<n; i++)
{
tat[i] = ct[i] - at[i];
tottat+=tat[i];
}
for(i=0;i<n; i++)
{
wt[i] = tat[i] - bt[i];
totwt+=wt[i];
}
printf("\nP.No\tAt\tBt\tCt\tTat\tWt");
for(i=0; i<n; i++)
{
printf("\nP%d\t%d\t%d\t%d\t%d\t%d",i,at[i],bt[i],ct[i],tat[i],wt[i]);
}
printf("\nAverage Turn Around Time: %f",tottat);
printf("\nAverage Waiting Time: %f",totwt);
}
    
