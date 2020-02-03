/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoie <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 07:24:14 by ejoie             #+#    #+#             */
/*   Updated: 2020/02/03 08:01:55 by ejoie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long long nb;
	int i;
	
	i = 0;
	size = sizeof(nb);

	if (nb > 10)
	{
		while(i < size)
		{
			ft_putchar(nb % 10);
		}
	}
	else if (nb < 10 && nb > 0)
		ft_putchar(nb);
	else
	{

	}
}

int main()
{
	int nb = 42;
	ft_putnbr(nb);
	return(0);
}

