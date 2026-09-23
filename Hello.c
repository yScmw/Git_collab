#include <stdio.h>
// Print a greeting message for the specified user
int greeting(const char *name)
{
printf("Hello, %s!\n", name);
return 0;
}
int farewell(const char *name)
{
printf("Goodbye, %s!\n", name);
return 0;
}
// Print a check in message for the specified user
int checkin(const char *name)
{
    printf("%s are checked in\n, name");
    return 0;
}
int main(void)
{
    checkin("Developer A,B,C");
    greeting("Developer A,B,C !!");
    farewell("Developer A,B,C");
    return 0;
}