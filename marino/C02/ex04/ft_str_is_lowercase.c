/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:15:27 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 16:19:53 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >=97 && str[i] <= 122))
        {
            return (0);
        }
        i++;
    }
    
    return (1);
}

int main(void)
{
    char ok[] = "miniscule";
    char ko[] = "erreurDelogique";
    printf("%d\n",ft_str_is_lowercase(ok));
    printf("%d\n",ft_str_is_lowercase(ko));
    return (1);
}