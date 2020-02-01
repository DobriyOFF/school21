/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoie <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 06:08:00 by ejoie             #+#    #+#             */
/*   Updated: 2020/02/01 22:23:34 by ejoie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0 || nb == 0)
		return (1);
	else if (power > 0)
	{
		power -= 1;
		while (0 < power)
		{
			nb = nb * i;
			power--;
		}
		return (nb);
	}
	else if (power < 0)
		return (0);
	return (0);
}
