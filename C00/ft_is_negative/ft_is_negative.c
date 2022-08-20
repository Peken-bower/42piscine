/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:43:16 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/08/20 12:06:43 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_is_negative(int n)
{
    if(n < 0)
    {
        write(1,"N",1);
    }
    else
    {
        write(1,"P",1);
    }
}

/* ************************************************************************** */

void ft_putchar_fd(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    if(n < 0)
    ft_putchar_fd('N');
    else
    ft_putchar_fd('P');
}