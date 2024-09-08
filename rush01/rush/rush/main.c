//
//  main.c
//  rush
//
//  Created by Dessy Ilieva on 7.09.24.
//

#include <unistd.h>

 
  // check if valid input, if not -stop/print error
int     ft_check_input(char *str);
int     ft_convert_string(char *str, int **cnv);


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        return 0;
    }
    char *str = argv[1];
}
