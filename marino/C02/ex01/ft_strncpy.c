/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <mtodizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:20:04 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 14:44:55 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    afficher_chaine(char *chaine, int size);
int    calcul_size_chaine(char *chaine);

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (calcul_size_chaine(src) > n)
    {
        while (i < n)
        {
            dest[j] = src[i];
            i++;
            j++;
        }
    }
    else
    {
        while (src[i] != '\0')
        {
            dest[j] = src[i];
            i++;
            j++;
        }
        dest[j] = '\0';
    }
    return (dest);
}

int main(void)
{
    char source[] = "marino";
    char destination[] = "khayri";
    ft_strncpy(destination,source, 2);
    //strncpy(destination,source, 2);
    int size_destination = calcul_size_chaine(destination);
    afficher_chaine(destination,size_destination);

    return (0);
}

void afficher_chaine(char *chaine, int size)
{
    int i = 0;
    while (i < size)
    {
        write(1, &chaine[i], 1);
        i++;
    }
    write(1, "\n",1);
    
}

int    calcul_size_chaine(char *chaine)
{
    int i;
    i = 0;
    while (chaine[i] != '\0')
    {
        i++;
    }
    
    return (i);
}