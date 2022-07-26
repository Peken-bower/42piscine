/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:37:39 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/26 09:06:19 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
              [*7] : http://codewiki.wikidot.com/c:system-calls:write , https://dextutor.com/write-read-system-call/ ,  https://www.youtube.com/watch?v=DJ_GcdS-rmE&ab_channel=DexTutor
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
        write(1, &c, 1); /*
                           We can't use Printf because is forbidden but we have write() althoug is Not a function is a system call in Unix {*7}
                           1 : is the descriptor of I/O stream 
                           &c: using this & symbole Write will take the address of variable and send this to funtion to print the contents of this address
                           1 : the size of the content . 
                        */
}

//Some info about Write
/*
   Identifier of Input/Output (I/O) stream : 
          -> 0 : stdin , standard input (keyboard)
          -> 1 : stdout , standard output (screen)
          -> 2 : stderr , standard error (screen)
   So when you open a file in your Operating system linux (OS Linux)
   OS creates an entry for views and edit this file . 
   if you open 100 file your OS will create this entries . 
   So we need integers to represent this entries like (170,12,71...) this entry number is the file descriptor that it describe the file. 
   So OS have 3 constent entries 0 1 and 2 .
*/

// the Main Function .
char main(char c){
        write(1,"can you please give me your char? :  ",37);
        read(1,&c,1);
        ft_putchar(c);
        write(1,"\n",1);
}