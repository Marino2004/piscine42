/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:30:43 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/16 15:10:47 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[(size) - 1];
		tab[(size) - 1] = temp;
		size--;
		i++;
	}
}

void	afficher_tab(int *tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		printf("[%d]", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int tab[] = {1 , 2, 3, 4, 5};
	afficher_tab(tab);
	ft_rev_int_tab(tab, 5);
	afficher_tab(tab);
	return (0);
}
