/* ************************************************************************** 
         Write a function that displays the character passed as a parameter.   
                 The function should be declared like this:

                          void ft_putchar(char c);

          Write is a file Descriptor is Not A Function is Not Like Printf . 
                we can't use printf in Pool because is forbidden.
 ****************************************************************************/

/****************************************************************************
                                Some Resources :
              [*1] : https://www.geeksforgeeks.org/preprocessor-works-c/
              [*2] : https://eyebulb.com/what-does-unistd-h-mean-in-c/
              [*3] : https://www.javatpoint.com/functions-in-c
              [*4] : https://www.geeksforgeeks.org/functions-in-c/ , https://www.tutorialspoint.com/cprogramming/c_functions.htm   
              [*5] : https://ecomputernotes.com/what-is-c/function-a-pointer/void-functions
              [*6] : https://www.geeksforgeeks.org/data-types-in-c/
****************************************************************************/

#include <unistd.h>  // Unistd Lib is for Unix System is a header file that provides access to the POSIX Linux API {check *2}
#include <stdio.h>
void ft_putchar(char c) /*
                          Here we declare our function using this prototype . {*3 , *4 }
                          Void : this is The type of data that the function will return , here we use void because function don't return anything{*5}
                          ft_putchar : this is name of function ? .
                          () : parameter to execute this function .
                          char c : the Data type of parameter is char{*6}.
                         */
{
        write(1, &c, 1); // here i use 
}

char main(char c){
        write(1,"can you please give me your char? :  ",37);
        read(1,&c,1);
        ft_putchar(c);
        write(1,"\n",1);
}