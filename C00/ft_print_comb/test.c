#include <unistd.h>

/*
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
int main()
{
    ft_print_comb();
}
*/
/*
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
*/

/*
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
 
int     main(void)
{
    count();
    return (0);
}
*/

/*
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
*/