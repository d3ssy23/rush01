//
//  cnv_to_numbers.c
//  rush
//
//  Created by Dessy Ilieva on 8.09.24.
//

#include <unistd.h>
#include <stdio.h>

//converting the input string of numbers to integers

int     ft_convert_string(char *str, int *cnv)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        while (i < 4)
        {
        *cnv = str[i] - '0';
        i++;
        }
    write(1, "\n", 1);
    }
    return(*cnv);
}

//creating the grid (2D grid) initialised to 0

void    ft_grid_set(int *cnv, int *result, char *str)
{
    int grid[16] = {0};
    int cols = 4;
    int i, j;
    j = 0;
    while(str[j] != '\0'){
        i = 0;
        while(i <= cols)
        {
            result[i] = cnv[i];
            i++;
        }
        write(1, "\n", 1);
        j++;
    }
    
    
  //  int grid[4][4] = {0};
  //  **result = grid[4][4];


}

//creating logic and storing the certain values for 1 and 4 in the grid

int    ft_putting_numbers(int *cnv, int *result, int *pos_store, char *str)
{
    int i = 0;
    //char p_one = '1';
    //char p_four = '4';
    int min_value;
    int max_value;

while(str[i] != '\0')
{
   
    if (cnv[i] == 4)
    {
       // grid[3][2] = 1;
        result[i] = cnv[i];
        write(1, &p_one, 1);
        
    }
    if (cnv[i] == 1)
    {
        result[i] = cnv[i];
        write(1, &p_four, 1);

    }
    
    cnv[i]++;
    result[i]++;
    str[i]++;
}
}

//function to
void    ft_sorted_array(int n, int *result){
    
    while (cnv[i] )
    
}
