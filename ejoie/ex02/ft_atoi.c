/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoie <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 20:01:21 by ejoie             #+#    #+#             */
/*   Updated: 2020/02/03 22:44:23 by ejoie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int res;
	int i;
	int minus_plus;

	minus_plus = 0;
	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		minus_plus = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += (int)str[i++] - '0';
	}
	if (minus_plus == 1)
		return (-res);
	else
		return (res);
}
