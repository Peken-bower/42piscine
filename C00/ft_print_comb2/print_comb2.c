/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:28:10 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/08/20 12:06:43 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_fd(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int     i; 
    int     j; 

    i = 0;
    j = 0;
    while (i < 100)
    {
        j = i + 1;
        while(j < 100 )
        {
            ft_putchar_fd((i / 10) + '0');
			ft_putchar_fd((i % 10) + '0');
            ft_putchar_fd(' ');
            ft_putchar_fd((j / 10) + '0');
			ft_putchar_fd((j % 10) + '0');
            if (((i / 10  )!= 9)|| ((i % 10) != 8))
            {
                ft_putchar_fd(',');
                ft_putchar_fd(' ');
            }
            j++;
        }
        i++;
    }
    
}

int main()
{
    ft_print_comb2();
}
/* ************************************************************************** */