// Write a program to create a child process and output the PID of the child process and PID of parent process.

/*
x == 0 -> Child Execute
x > 0 -> Parent Execute
x < 0 -> Not Create Child
*/

#include <stdio.h>
#include<unistd.h>
int main()
{
    int x;
    x  = fork();
    if (x == 0)
    {
        printf("Child Process.\n");
        printf("Process Id: %d\n", getpid());
    }
    else
    {
        printf("Parent Process.\n");
        printf("Process Id: %d\n", getpid());
    }
    return 0;
}
