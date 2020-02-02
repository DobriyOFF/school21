/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoie <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 01:39:42 by ejoie             #+#    #+#             */
/*   Updated: 2020/02/02 06:11:20 by ejoie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_mid(int x_print, int x)
{
	if (x >= 1)
	{
		ft_putchar('|');
		while (x_print > 0)
		{
			ft_putchar(' ');
			x_print--;
		}
		ft_putchar('|');
	}
}

void ft_begin_end(int y_print, int y, int x)
{
	if (y >= 1 && x != 1)
	{
		ft_putchar('o');
		while (y_print > 0)
		{
			ft_putchar('-');
			y_print--;
		}
		ft_putchar('o');
	}
	else
	{
		y_print += 2;
		ft_putchar('o');
		while (y_print > 2)
		{
			ft_putchar('-');
			y_print--;
		}
		ft_putchar('o');
	}
}

void rush(int x, int y)
{
	int x_print = x - 2;
	int y_print = y - 2;
	if (x != 1 && y != 1)
	{
		ft_begin_end(x_print, x);
		ft_putchar('\n');
		ft_mid(x_print, y);
		ft_putchar('\n');
		ft_begin_end(x_print, x);
	}
	else
	{
		ft_begin_end(x_print, x);
	}
}
