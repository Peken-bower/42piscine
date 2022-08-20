/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:08:25 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/08/20 12:06:43 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
#include <unistd.h>
void ft_putchar_fd(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char letter;

    letter = 'a';
    while(letter <= 'z')
    {
        ft_putchar_fd(letter);
        letter++;
    } 
}
/* ************************************************************************** */
#include <unsitd.h>

void ft_print_alphabet(void)
{
    short letterAscii; 
    char letter;

    letterAscii = 97; // this is ascii code of 'a'
    while (letterAscii <= 122) // this is ascii code of 'z'
    {
        letter = letterAscii; // because if we want to print ascci of 'z' is 122 we can't do using putchar it will put just 1 . not 122 
        ft_putchar_fd(letter);
        letterAscii++;

    }
}
/* ************************************************************************** */
#include <unistd.h>

void ft_put_alphabet()
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 26); // don't use this . 
}