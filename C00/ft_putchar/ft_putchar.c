
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:25:51 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/26 07:42:54 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unsitd.h>

void    ft_putchar_fd(char c)
{
    write(1, &c, 1);
}