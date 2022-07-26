/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:13:28 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/26 18:34:34 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_reverse_alphabet(void)

{
    char    letter;

    letter  = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;       
    }
}

/* ************************************************************************** */ 

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    short letterAscii;
    char letter; 

    letterAscii = 122;
    while (letterAscii >= 97)
    {
        letter = letterAscii;
        write(1, &letter, 1);
        letterAscii--;
    }
}
