#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int n,i,id;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    id=fork();
    if(id>0)
    {
        wait(NULL);
        printf("\nParent Process\n");
        for(i=0;i<=n;i++)
        {
            if(i%2!=0)
            {
                printf("%d\n",i);
            }
        }
        printf("ID=%d\n",getpid());
        printf("Parent ID=%d\n",getppid());
        printf("Child ID=%d\n",id);
    }
    else
    {
        printf("\nChild Process\n");
        for(i=0;i<=n;i++)
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
        printf("ID=%d\n",getpid());
        printf("Parent ID=%d\n",getppid());
        printf("Child ID=%d\n",id);
    }
}
