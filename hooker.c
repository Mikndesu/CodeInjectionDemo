#include <dlfcn.h>
#include <stdio.h>

int printf(const char * _restrict, ...)
{
  typedef int (*ftype)(const char *, ...);

  return ((ftype)dlsym(RTLD_NEXT, "printf"))("bbb\n");
}
