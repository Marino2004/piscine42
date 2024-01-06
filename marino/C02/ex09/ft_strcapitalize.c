/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:50:53 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 17:19:32 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_str_capitalize(char *str)
{
    int i;

    i =0;
    while (str[i] != '\0')
    {
        if(str[0] >= 97 && str[0] <= 122)
            str[i] -= 32;
        else
            i++;
        if(!((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)))
        {
            i++;
            if (str[i] >= 97 && str[i] <= 122)
                str[i] -= 32;
        }
        i++;
    }
    
    return (str);
}

int main(void)
{
    char ok[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n",ft_str_capitalize(ok));
    return (1);
}