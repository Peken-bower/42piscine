/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:25:51 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/26 04:39:43 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** 
         Write a function that displays the character passed as a parameter.   
                 The function should be declared like this:

                          void ft_putchar(char c);

    Write is a file Descriptor is Not A Function is Not Like Printf . 
            we can't use printf in Pool because is forbidden.
 ************************************************************************** */


#include <unsitd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}