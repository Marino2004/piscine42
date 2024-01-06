/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:24:48 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/19 16:59:53 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// void ft_convert_to_integer(int nb)
// {
//     nb += 48;
//     write(1, &nb, 1);
// }

int ft_calcul_size_char(char *tab)
{
    int i;
    i = 0;
    while(tab[i] != '\0')
        i++;
    return (i);
}
void    ft_print_reverse_tab(char *tab)
{
    int i;
    int j;

    j = ft_calcul_size_char(tab);
    i = 0;
    while (i < j)
    {
        write(1, &tab[j -1], 1);
        j--;
        i++;
    }
    
}
// void    ft_putnbr(int nb)
// {
//     int i,j;
//     char tab[] = "";

//     j = 0;
//     while (nb / 10 != 0)
//     {
//         i = nb;
//         i %= 10;
//         ft_convert_to_integer(i);
//         tab[j] = i;
//         j++;
//         nb /= 10;
//     }
//     i = nb;
//     i %= 10;
//     ft_convert_to_integer(i);    
// }

int main(void)
{
    char tab[] = "reverse";
    printf("%d\n", ft_calcul_size_char(tab));
   ft_print_reverse_tab(tab);
    
    return (1);
}