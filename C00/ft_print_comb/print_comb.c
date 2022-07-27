/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:33:50 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/27 07:34:40 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_comb(void)
{
    char num[3];

    num[0] = '0';
    while (num[0] <= '7')
    {
        num[1] = num[0] + 1;
        while (num <= '8')
        {
            num[2] = num[1] + 1;
            while (num[2] <= '9')
            {
                ft_putchar(num[0]);
                ft_putchar(num[1]);
                ft_putchar(num[2]);
                if (num[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
                num[2]++;
            }
            num[1]++;
        }
        num[0]++;
    }
    
}

int main ()
{
    ft_print_comb();
}