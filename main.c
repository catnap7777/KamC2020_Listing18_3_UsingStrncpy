
//Listing 18.3 Using the strncpy() function; page 459

#include <stdio.h>
#include <string.h>


char dest[] = "..........................";
char source[] = "abcdefghijklmnopqrstuvwxyz";

int main(void)
{
    size_t n;

    while(1)
    {
        puts("Enter the number of characters to copy (1-26): ");
        scanf("%zd", &n);

        if(n>0 && n<27)
        {
            break;
        }
    }

    printf("\nBefore strncpy destination = %s\n", dest);

    strncpy(dest, source, n);

    printf("\nAfter strncpy destination = %s\n\n", dest);

    return 0;
}
