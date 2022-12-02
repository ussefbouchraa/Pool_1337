/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 04:37:57 by ybouchra          #+#    #+#             */
/*   Updated: 2022/06/13 04:54:26 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	last;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			last = second + 1;
			while (last <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(last);
				if (first != '7')
					write(1, ", ", 2);
					last++;
			}
			second++;
		}
		first++;
	}
}
