#include <stddef.h>

#define SYSC_FORK 0x1
#define SYSC_GETPID 0x2
#define SYSC_WRITE 0x3
#define SYSC_READ 0x4
#define SYSC_INTERRUPT_WAIT 0x5
#define SYSC_GETPRIORITY 0x6
#define SYSC_SETPRIORITY 0x7
#define SYSC_MKNOD 0x8
#define SYSC_SLEEP 0x9

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
