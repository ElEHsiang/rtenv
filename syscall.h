#include <stddef.h>

#define sysc_fork 0x1
#define sysc_getpid 0x2
#define sysc_write 0x3
#define sysc_read 0x4
#define sysc_interrupt_wait 0x5
#define sysc_getpriority 0x6
#define sysc_setpriority 0x7
#define sysc_mknod 0x8
#define sysc_sleep 0x9

void *activate(void *stack);

int fork();
int getpid();

int write(int fd, const void *buf, size_t count);
int read(int fd, void *buf, size_t count);

void interrupt_wait(int intr);

int getpriority(int who);
int setpriority(int who, int value);

int mknod(int fd, int mode, int dev);

void sleep(unsigned int);
