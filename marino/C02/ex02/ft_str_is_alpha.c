/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:51:52 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 16:04:36 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_alpha(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
        {
            printf("%c", str[i]);
            return (0);
        }
        i++;
    }
    return (1);
} 

int main(void)
{
    char chaine[] = "Ceciestunephraseuniquementaveclescaracterealphabetiques";
    char chaine1[] = "Icijetests'ilyauneerreur";
    printf("%d\n",ft_str_is_alpha(chaine));
    printf("%d\n",ft_str_is_alpha(chaine1));
    
    return (1);
}