/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 23:49:40 by ybouchra          #+#    #+#             */
/*   Updated: 2022/06/16 23:50:10 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putshar(char a)
{
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
	b = a;
		while (b++ < 99)
		{	
			ft_putshar(a / 10 + '0');
			ft_putshar(a % 10 + '0');
			write (1, " ", 1);
			ft_putshar(b / 10 + '0');
			ft_putshar(b % 10 + '0');
			if (a != 98)
			{
				ft_putshar(',');
				ft_putshar(' ');
			}
		}
	}
}
