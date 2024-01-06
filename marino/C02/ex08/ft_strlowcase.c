/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:43:05 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 16:47:56 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlowcase( char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
    }
    
    return (str);
}

int main(void)
{
    char ok[] = "CE CODE EST OK n'est ce pas !!";
    printf("%s\n", ft_strlowcase(ok));
    char ko[] = "ce code est ko";
    printf("%s\n", ft_strlowcase(ko));
    return (1);
}