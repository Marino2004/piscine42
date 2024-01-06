/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtodizar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:11:36 by mtodizar          #+#    #+#             */
/*   Updated: 2023/12/10 14:05:16 by mtodizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	possible_case(int a, int b)
{
	int case1;
	int	case2;
	int	case3;
	int	case4;
	int	case5;
	int	case6;

	case1 = (a == 1 && b == 2) || (b == 1 && a == 2);
	case2 = (a == 1 && b == 3) || (b == 1 && a == 3);
	case3 = (a == 1 && b == 4) || (b == 1 && a == 4);
	case4 = (a == 2 && b == 2) || (b == 2 && a == 2);
	case5 = (a == 2 && b == 3) || (b == 2 && a == 3);
	case6 = (a == 2 && b == 4) || (b == 2 && a == 4);

	return (case1 || case2 || case3 || case4 || case5 || case6);
}
void user_input(int a, int b)
{
	if (possible_case(a, b))
	{
		write(1, "OK", 2);
	}
	else
	{
		write(1, "Error", 5);
	}
	write(1, "\n", 1);
}

int	main(void)
{
	user_input(1, 2);
	user_input(1, 3);
	user_input(1, 4);
	user_input(2, 2);
	user_input(2, 3);
	user_input(1, 1);
	user_input(4, 4);
	user_input(3, 1);
	user_input(2, 1);

	return (0);
}
