# include <stdio.h>

int main(void)
{
    // Print two boxes connected by a dashed arrow with >> at both ends
    // Using monospaced alignment for a typical console width
    printf(" ------------                ------------\n");
    printf("|            |              |            |\n");
    printf("|            |>>---------->>|            |\n");
    printf("|            |              |            |\n");
    printf(" ------------                ------------\n");
    return 0;
}
