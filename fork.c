#include <stdio.h>
#include <unistd.h>
int main()
{
int ret;
printf("start!\n");
ret = fork();
printf("return value: %d\n", ret);
printf("end!\n");
return 0;
}
