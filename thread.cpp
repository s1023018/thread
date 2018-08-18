#include <iostream>
#include <pthread.h>
#include <windows.h>
using namespace std;

void *gello(void* args)
{
    cout<<"hello "<<endl;
}

int main()
{

    pthread_t tids[5];
    for(int i=0;i<5;i++)
    {
        int ret = pthread_create(&tids[i],NULL,gello,NULL);
        Sleep(100);
    }
    //pthread_creat(thread,attr,start_routing,arg);

    pthread_exit(NULL);
}






