/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:20:41 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 16:24:56 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 65 && str[i] <= 90))
        {
            return (0);
        }
        i++;
    }
    
    return (1);
}

int main(void)
{
    char ok[] = "MAJUSCULE";
    char ko[] = "c'estmort";
    printf("%d\n", ft_str_is_uppercase(ok));
    printf("%d", ft_str_is_uppercase(ko));
    return (0);
}