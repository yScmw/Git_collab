#include <stdio.h>
// Print a greeting message for the specified user
int greeting(const char *name)
{
printf("Hello, %s!\n", name);
return 0;
}
int main(void)
{
greeting(“Developer A,B,C !!”);
return 0;
}