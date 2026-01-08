#include <stdlib.h>

int main(void)
{
    while (1)
    {
        int* p = (int*)malloc(16 * sizeof(int));
    }
    
    return 1337;
}