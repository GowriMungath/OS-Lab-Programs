#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *add(void*args)
{
    int n1,n2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("sum=%d\n",(n1+n2));
}
int main()
{
    pthread_t id;
    pthread_t create(&id,NULL,add,NULL);
    pthread_t join(id,NULL);
}
