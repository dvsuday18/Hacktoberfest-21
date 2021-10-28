#include <stdio.h>
int main() {
    int i,p,bt[10],wt[10],tt[10];
    float n,s1,s2,awt,att;
    printf("\nEnter the no.of processes : ");
    scanf("%f",&n);
    printf("\nEnter the burst times : ");
    for(i=0;i<n;i++) {
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=0;i<n+1;i++) {
        wt[i+1]=bt[i]+wt[i];
    }
    printf("\n\tPROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND 
    TIME");
    for(i=0;i<n;i++) {
        tt[i] = bt[i]+wt[i];
        printf("\n\tp%d \t\t %d \t\t %d \t\t %d",i+1,bt[i],wt[i],tt[i]);
    }
    printf("\n");
    s1=0;
    for(i=0;i<n;i++) {
        s1+=wt[i];
    }
    awt = s1/n;
    s2=0;
    for(i=0;i<n;i++) {
        s2+=tt[i];
    }
    att = s2/n;
    printf("\n \t\t\t\t\t AWT:%0.2f \t ATT:%0.2f",awt,att);
}
