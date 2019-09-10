#include <stdio.h>
#include <conio.h>

int main (){
    int nb,n,s[100],bno[100],bs[100],i,j;
    char process[100];
    printf("Enter number of Process :");
    scanf("%d",&n);


    for (i = 0; i<n;i++){

        printf("Enter processes : ");
        scanf("%s",&process[i]);
        printf("Enter size of the processes : ");
        scanf("%d",&s[i]);
    }
    printf("Enter number of Blocks :");
    scanf("%d",&nb);

    for (i = 0; i<nb ;i++){
        printf("Enter blocks :");
        scanf("%d",&bno[i]);
        printf("Enter blocks :");
        scanf("%d",&bs[i]);
    }

    printf("Process and Size : ");

    for (i = 0;i<n;i++){
        printf("%d\t\t\t%d",process[i],s[i]);

    }
    printf("Block and Block Size : ");

    for (i = 0;i<n;i++){
        printf("%d\t\t\t%d",bno[i],bs[i]);

    }
}
