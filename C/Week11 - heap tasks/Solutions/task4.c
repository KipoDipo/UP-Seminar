#include <stdio.h>
#include <stdlib.h>

char** tokenizePath(const char* path, unsigned* count)
{
    *count = 0;
    for (int i = 0; path[i] != '\0'; i++)
    {
        if (path[i] == '/')
        {
            (*count)++;
            //
            // *count++ will increment the pointer and THEN dereference it
            //
        }
    }
    (*count)++; // for the last item, since the string doesn't end in '/'

    char** result = malloc(*count * sizeof(char*));

    unsigned index = 0;
    unsigned beginIndex = 0;
    unsigned wordLength = 0;
    for (int i = 0; path[i] != '\0'; i++)
    {
        if (path[i] != '/')
        {
            wordLength++;
        }
        else
        {
            result[index] = malloc(wordLength + 1);

            unsigned j;
            for (j = 0; j < wordLength; j++)
            {
                result[index][j] = path[beginIndex + j];
            }
            result[index][j] = '\0';

            beginIndex += wordLength + 1;
            index++;
            wordLength = 0;
        }
    }

    // again, for the last item:
    result[index] = malloc(wordLength + 1); 

    unsigned j;
    for (j = 0; j < wordLength; j++)
    {
        result[index][j] = path[beginIndex + j];
    }
    result[index][j] = '\0';

    return result;
}

int main(void)
{
    const char path[] = "C:/Windows/System32/notepad.exe";
    unsigned count = 0;


    char** tokens = tokenizePath(path, &count);

    for (unsigned i = 0; i < count; i++)
    {
        printf("%s\n", tokens[i]);
    }

    printf("\n");
    printf("Total components: %u", count);

    for (unsigned i = 0; i < count; i++)
    {
        free(tokens[i]);
    }
    free(tokens);

    return 0;
}