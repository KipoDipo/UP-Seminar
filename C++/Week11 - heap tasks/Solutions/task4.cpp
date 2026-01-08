#include <iostream>

char** tokenizePath(const char* path, int& count)
{
    count = 0;
    for (int i = 0; path[i] != '\0'; i++)
    {
        if (path[i] == '/')
        {
            count++;
        }
    }
    count++; // for the last item, since the string doesn't end in '/'

    char** result = new char * [count + 1];

    int index = 0;
    int beginIndex = 0;
    int wordLength = 0;
    for (int i = 0; path[i] != '\0'; i++)
    {
        if (path[i] != '/')
        {
            wordLength++;
        }
        else
        {
            result[index] = new char[wordLength + 1] {};

            for (int j = 0; j < wordLength; j++)
            {
                result[index][j] = path[beginIndex + j];
            }

            beginIndex += wordLength + 1;
            index++;
            wordLength = 0;
        }
    }

    result[index] = new char[wordLength + 1] {}; // again, for the last item

    for (int j = 0; j < wordLength; j++)
    {
        result[index][j] = path[beginIndex + j];
    }


    return result;
}

int main()
{
    const char path[] = "C:/Windows/System32/notepad.exe";
    int count = 0;


    char** tokens = tokenizePath(path, count);

    for (int i = 0; i < count; i++)
    {
        std::cout << tokens[i] << '\n';
    }

    std::cout << '\n';
    std::cout << "Total components: " << count;

    for (int i = 0; i < count; i++)
    {
        delete[] tokens[i];
    }
    delete[] tokens;
}