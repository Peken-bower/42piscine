/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:41:28 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/26 09:49:36 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    short letterAscii; 
    char letter;

    letterAscii = 97; // this is ascii code of 'a'
    while (letterAscii <= 122) // this is ascii code of 'z'
    {
        letter = letterAscii; // because if we want to print ascci of 'z' is 122 we can't do using putchar it will put just 1 . not 122 
        ft_putchar(letter);
        letterAscii++;

    }
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}