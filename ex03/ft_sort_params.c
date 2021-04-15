/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:43:53 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/15 14:53:53 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;
	int				diff;

	while (*s1)
	{
		c1 = *s1;
		c2 = *s2;
		diff = c1 - c2;
		if (diff != 0)
			return (diff);
		s1++;
		s2++;
	}
	c1 = *s1;
	c2 = *s2;
	if (c1 != c2)
		return (*s1 - *s2);
	return (0);
}

void	ft_putstr(char *str)
{
	unsigned int	length;

	length = ft_strlen(str);
	write(1, str, length);
}

void	sort_str(unsigned int arr_size, char *strings[])
{
	unsigned int	i;
	unsigned int	j;
	char			*tmp;

	i = -1;
	while (++i < arr_size)
	{
		j = i - 1;
		while (++j < arr_size)
			if (ft_strcmp(strings[i], strings[j]) > 0)
			{
				tmp = strings[i];
				strings[i] = strings[j];
				strings[j] = tmp;
			}
	}
}

int		main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		sort_str(argc - 1, argv + 1);
		i = 0;
		while (++i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
		}
	}
}
