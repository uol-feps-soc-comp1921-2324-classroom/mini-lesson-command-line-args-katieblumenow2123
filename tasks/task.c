#include <stdio.h>
#include <stdlib.h>

/**
 * argv[1] - num1
 * argv[2] - num2
 */
int main(int argc, char *argv[]) 
{
    if (argc != 3)
    {
        printf("usage: wlk <num1>\n");
        return 0;
    }
        
    int sum = atoi(argv[1]) + atoi(argv[2])
    printf("%s",sum);


    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);


    return 0; // Exit successfully
}
