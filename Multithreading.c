#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
int n1,n2;
void *add(void*args)
{
    printf("sum=%d\n",(n1+n2));
}
int main()
{
    pthread_t id1,id2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&n1,&n2);
    pthread_t create(&id1,NULL,add,NULL);
    pthread_t create(&id2,NULL,add,NULL);
    pthread_t join(id1,NULL);
    pthread_t join(id2,NULL);
}
