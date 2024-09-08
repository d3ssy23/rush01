//
//  valid_check.c
//  rush
//
//  Created by Dessy Ilieva on 8.09.24.
//
#include <unistd.h>

int     ft_check_input(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if ( ! (str[i] >= '1' && str[i] <= '4') || str[i] == ' ')
                {
                write(1, "Error: Invalid input\n", 21);
                return (0);
                }
                i++;
        }
        if (i != 31)
       {
                write(1, "Error: Invalid input length\n", 28);
                return (0);
         }
        return (1);
}
