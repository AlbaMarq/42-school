#include <unistd.h>

int val_input_len(char str[]) 
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (i > 30)
            return (1);
        i++;
    }
    return (0);
}

int val_input_num(char str[])
{
    int i;

    i = 0;
    while (str[i] != '\0' && i < 32)
    {
        if ((str[i] < '1' || str[i] > '4'))
            return (1);
        i = i + 2;
    }
    return (0);
}

int val_input_four(char str[])
{
    int i;
    int four;

    i = 0;
    while (str[i] != '\0')
    {
        four = 0;
        if (str[i] == '4')
            four++;
        if (str[i + 1] == '4')
            four++;
        if (str[i + 2] == '4')
            four++;
        if (str[i + 3] == '4')
            four++;
        if (four > 1)
            return (1);
        i = i + 4;
    }
    return (0);
}   

int val_input_one(char str[])
{
    int i;
    int one;

    i = 0;
    while (str[i] != '\0')
    {
        one = 0;
        if (str[i] == '1')
            one++;
        if (str[i + 1] == '1')
            one++;
        if (str[i + 2] == '1')
            one++;
        if (str[i + 3] == '1')
            one++;
        if (one > 1)
            return (1);
        i = i + 4;
    }
    return (0);
}   

int input_validation(char *str)
{
    if (val_input_len(str)) 
    {
        write(1, "Wrong lenght", 12);
        return (1);
    }
    if (val_input_num(str)) 
    {
        write(1, "Wrong number", 12);
        return (1);
    }
    if (val_input_four(str)) 
    {
        write(1, "Wrong input, more than one 4 per row/column", 44);
        return (1);
    }
    if (val_input_one(str)) 
    {
        write(1, "Wrong input, more than one 1 per row/column", 44);
        return (1);
    }
    return (0);
}