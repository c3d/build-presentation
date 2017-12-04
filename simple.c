#include <pthread.h>

void thread(void)
{
    pthread_setname_np("Worker");
    do_stuff();
}
