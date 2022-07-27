/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:18:29 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/27 22:42:28 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** 
                             Some Info : 
    i have add many solution for this case so please check you best solution 
    Work to understand its algorithms, do not rush, there maybe a solution 
    that will be rejected by the molinete ?? 

 ************************************************************************** */

/**************************************************************************  
 *                         Some Resources :
 *            https://stackoverflow.com/questions/40423844
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

/* ************************************************************************* */
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    char    nbr1;
    char    nbr2;
    char    nbr3;

    nbr1 = '0' - 1;
    while (++nbr1 <= '9')
    {
        nbr2 = nbr1;
        while (++nbr2 <= '9')
        {
            nbr3 = nbr2;
            while (++nbr3 <= '9')
            {
                if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
                    ft_putchar(',');
                if (nbr1 != '0' || nbr2 != '1' || nbr3 != '2')
                    ft_putchar(' ');
                ft_putchar(nbr1);
                ft_putchar(nbr2);
                ft_putchar(nbr3);
            }
        }
    }
}

/* ************************************************************************* */

// We can do it with For Loop it easy but is Forbidan 
#include <stdio.h>
int main(void){
    int i, j, k;
    for (i = 0; i <= 9; i++) {
        for (j = i+1; j <= 9; j++) {
            for (k = j+1; k <= 9; k++) {
                printf("%d%d%d\n", i, j, k);
            }
        }
    }
}

 /* ************************************************************************* */

void  ft_putchar(char c)
{
    write(1, &c, 1);
}
 
void    count(void)
{
    int a;
    int b;
    int c;
 
    a = '0';
    b = '1';
    c = '2';
    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                ft_putchar(' ');
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a;
    }
}
 
 /* ************************************************************************* */


void    ft_print_comb(void)
{
    int a = 0, b = 0, c = 0;
 
    while (a < 10)
    {
        b = a + 1;
        while (b < 10)
        {
            c = b + 1;
            while(c < 10)
            {
                ft_putchar(48 + a);
                ft_putchar(48 + b);
                ft_putchar(48 + c);
                ft_putchar(',');
                ft_putchar(' ');
                ++c;
            }
            ++b;
        }
        ++a;
    }
}

  /* ************************************************************************* */

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
  /* ************************************************************************* */