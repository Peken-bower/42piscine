/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:46:18 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/07/26 18:57:47 by aelmrabe         ###   ########.fr       */
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

//Main Function 
int main()
{
    ft_is_negative(-1);//N
    ft_is_negative(10);//P
    ft_is_negative(0);//P
}