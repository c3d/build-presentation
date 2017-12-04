#ifdef HAVE_PTHREAD_H
#include <pthread.h>
#endif

void thread(void)
{
#ifdef HAVE_PTHREAD_SETNAME_NP_1ARG
    pthread_setname_np("Worker");
#else
    pthread_setname_np(pthread_self(), "Worker");
#endif
    do_stuff();
}
