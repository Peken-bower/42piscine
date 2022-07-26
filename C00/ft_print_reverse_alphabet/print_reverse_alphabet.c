/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reverse_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:36:36 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/26 18:36:39 by aelmrabe         ###   ########.fr       */
/*                                                                            */
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

int main ()
{
    ft_print_reverse_alphabet();
    return 0;
}