/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:26:09 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 16:33:34 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    char ok[] = "caractere qu'om peut afficher";
    char ko[] = "attention danger \n";

    printf("%d\n",ft_str_is_printable(ok));
    printf("%d",ft_str_is_printable(ko));

    return (1);
}