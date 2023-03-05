#include <stdio.h>
#include <windows.h>
int main(void)
{
    system("CHCP 437");
    
    unsigned int iASCII, iEnter = 0;
    
    for (iASCII = 128; iASCII < 256; iASCII++)
    {
        
        printf(" INDEX : %d, Char : %c ", iASCII, iASCII);
        ++iEnter;

        if (iEnter == 5)
        {
            iEnter = 0;
            printf("\n");
        }
    }
}