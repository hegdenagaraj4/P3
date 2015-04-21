#include <sys/cdefs.h>
#include <lib.h>
//#include "namespace.h"

#include <unistd.h>

int myunlink(name)
const char *name;
{
  message m;

  _loadname(name, &m);
  printf("\n Harmeet: Testing myunlink\n");
  return(_syscall(VFS_PROC_NR, MYUNLINK, &m));
}
