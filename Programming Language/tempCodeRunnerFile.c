#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ASCII_to_number(int d)
{
    int k = 0;
    switch (d)
    {
    case 48:
        k = 0;
        break;
    case 49:
        k = 1;
        break;
    case 50:
        k = 2;
        break;
    case 51:
        k = 3;
        break;
    case 52:
        k = 4;
        break;
    case 53:
        k = 5;
        break;
    case 54:
        k = 6;
        break;
    case 55:
        k = 7;
        break;
    case 56:
        k = 8;
        break;
    case 57:
        k = 9;
        break;
    default:
        break;
    }
    return k;
}

int main()
{

    char *s;
    int res[10], counter = 0;
    s = malloc(1024 * sizeof(char));
    scanf("%s", s);
    s = realloc(s, strlen(s) + 1);

    for (int i = 0; i < 10; i++)
    {
        res[i] = 0;
    }
    

    for (int i = 0; i < strlen(s); i++)
    {
        int k = 0;
        if (*(s + i) >= 48 && *(s + i) <= 57)
        {

            for (int j = 0; j < strlen(s); j++)
            {
                if (*(s + i) == *(s + j))
                {
                    ++counter;
                }
            }
        }

        k = ASCII_to_number(*(s + i));
        if (counter > 0)
        {
            res[k] = counter;
        }
        counter = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}