/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:06:14 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 16:13:48 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 48) && (str[i] <= 57)))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    char ok[] = "565416545464";
    char ko[] = "6854654d545";

    printf("%d\n", ft_str_is_numeric(ok));
    printf("%d\n", ft_str_is_numeric(ko));

    return (1);
}