#include <stdio.h>
#include <stdlib.h>

/**
 * argv[1] - num1
 * argv[2] - num2
 */
int main(int argc, char *argv[]) 
{
    if (argc != 3){
        printf("usage: task <name>\n");
        return 0;
    }


    int sum = atoi(argv[1])+ atoi(argv[2]);
    if (sum==0){
        printf("usage: task <name>\n");
        return 0;
    }
    printf("%d\n", sum);

        






    return 0; // Exit successfully
}
