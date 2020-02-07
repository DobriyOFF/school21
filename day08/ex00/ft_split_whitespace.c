/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoie <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 07:10:54 by ejoie             #+#    #+#             */
/*   Updated: 2020/02/07 07:51:10 by ejoie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_string_count(char *str)
{
	int i;
	int count;

	i = 0;
	string_count = 0;
	while(str[i] != 0)
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '\n')
			count++;
		i++;
	}
	return count;
}

int ft_words_count (char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '\n')
			count--;
		count++;
		i++;
	}
	return count++;
}

char	**ft_split_whitespace(char *str)
{
	int i;
	int size;
	char *tab;
	int j;

	j = 0;
	i = 0;
	size = (int *)malloc(sizeof(size) * ft_words_count);
	while (i < size)
	{
		tab[i];
	}
	i = 0;
	while (i < ft_string_count)
	{
		if (str[i] != ' ' || str[i] != '-' || str[i] != '\n' )
		{
			tab[j] = tab[i];
			i++;
			j++
		}
		i++;
	}
	return (tab);	
}





