#include<stdio.h>
#include<pthread.h>
#include <Windows.h>

void* myturn(void *arg)
{
    while(1)
    {
        Sleep(600);
        printf("\nMy turn");

    }
    return NULL;
}


void yourturn()
{

    while(1)
    {
        Sleep(700);
        printf("\nyour turn");

    }
}

int main()
{
    pthread_t thread;
    pthread_create(&thread,NULL,myturn,NULL);
    yourturn();
    return 0;
}
