/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:18:29 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/27 04:00:07 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** 
                             Some Info : 
                            
 ************************************************************************** */
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void printing(char f, char m, char l)
{
    ft_putchar(f);
    ft_putchar(m);
    ft_putchar(l);
}

void print_comb(void)
{
    char f;
    char m;
    char l;
    
    f = '0';
    while (f <= '9')
    {
        m =  f + 1;
        while (m <= '9')
        {        
            l = m + 1;
            while (l <= '9')
            {
                printing(f,m,l);
                if(!(f == '7' && m == '8' && l == '9'))
                {
                    ft_commas();
                }
                l++;
            }
            m++;
        }
        f++;   
    }

}

int main()
{
    print_comb();
}