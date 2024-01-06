/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:23:16 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/18 11:08:15 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void    afficher_tab(int *tab, int size);
int check_tab(int *tab, int size);

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int temp;

    while(!check_tab(tab , size))
    {
        i = 0;
        while (i < (size - 1))
        {
            temp = tab[i];
            if (tab[i] > tab[i + 1])
            {
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }
            i++;
        }
    }
}

int check_tab(int *tab, int size)
{
    int i;

    i = 0;
    while (i < (size - 1))
    {
        if (tab[i] > tab[i + 1])
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    int tab[] = {2, 8, 5, 1, 4, 22, 520, 230, 14, 22, 544, 10248, -5845};
    afficher_tab(tab, 13);
    ft_sort_int_tab(tab, 13);
    afficher_tab(tab, 13);
    return (0);
}

void    afficher_tab(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("[%d] ",tab[i]);
        i++;
	}
	printf("\n");
}
