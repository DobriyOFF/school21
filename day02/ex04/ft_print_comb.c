/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoie <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 19:04:23 by ejoie             #+#    #+#             */
/*   Updated: 2020/01/30 19:21:43 by ejoie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int		x;
	int		y;
	int		z;

	x = '0' - 1;
	while (++x <= '9')
	{
		y = x;
		while (++y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7' || y != '8' || z != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				z++;
			}
		}
	}
}>
