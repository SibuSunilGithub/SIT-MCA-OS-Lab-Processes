/*
WAP that will create a child process. The process has to be perform the following operation
of checking whether the accepted number is even or odd, and child has to check whether the number is prime or not.
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int num, prime = 1;
    printf("Enter A Number: ");
    scanf("%d", &num);

    int x = fork();
    if (x == 0)
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("Prime Number.\n");
        }
        else
        {
            printf("Not Prime Number!\n");
        }
    }
    else
    {
        if (num % 2 == 0)
        {
            printf("Even Number.\n");
        }
        else
        {
            printf("Odd Number!\n");
        }
    }
}