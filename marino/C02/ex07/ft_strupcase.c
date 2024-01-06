/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:35:32 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 16:42:09 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
        i++;
    }
    
    return (str);
}

int main(void)
{
    char ok[] = "miniscule en Majusclue.";
    printf("%s\n",ft_strupcase(ok));
    char ko[] = "HOLA";
    printf("%s",ft_strupcase(ko));

    return (1);
}