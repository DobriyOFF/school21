/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekyle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:32:15 by ekyle             #+#    #+#             */
/*   Updated: 2020/02/02 23:03:31 by ejoie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_mid(int x_print)
{
	ft_putchar('|');
	if (x_print > 0)
	{
		while (x_print > 0)
		{
			ft_putchar(' ');
			x_print--;
		}
		ft_putchar('|');
	}
	else if (x_print == 0)
		ft_putchar('|');
}

void	ft_first_last(int x_print)
{
	ft_putchar('o');
	if (x_print > 0)
	{
		while (x_print > 0)
		{
			ft_putchar('-');
			x_print--;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (x_print == 0)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	ft_exceptions(int x_print, int y_print)
{
	ft_first_last(x_print);
	while (y_print > 0)
	{
		ft_mid(x_print);
		ft_putchar('\n');
		y_print--;
	}
	ft_first_last(x_print);
}

void	rush(int x, int y)
{
	int x_print;
	int y_print;

	x_print = x - 2;
	y_print = y - 2;
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (y == 1)
		ft_first_last(x_print);
	else if (x == 2)
		ft_exceptions(x_print, y_print);
	else if (x >= 1 && y >= 1)
		ft_exceptions(x_print, y_print);
}
