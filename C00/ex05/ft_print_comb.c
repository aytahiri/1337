/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aytahiri <aytahiri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:49:41 by aytahiri          #+#    #+#             */
/*   Updated: 2024/06/27 11:24:07 by aytahiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(char l1, char l2, char l3)
{
	ft_putchar(l1);
	ft_putchar(l2);
	ft_putchar(l3);
	if (l1 != '7' || l2 != '8' || l3 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	l1;
	int	l2;
	int	l3;

	l1 = '0';
	while (l1 <= '7')
	{
		l2 = l1 + 1;
		while (l2 <= '8')
		{
			l3 = l2 + 1;
			while (l3 <= '9')
			{
				ft_print_num(l1, l2, l3);
				l3++;
			}
			l2++;
		}
		l1++;
	}
}
