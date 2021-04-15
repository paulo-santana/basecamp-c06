/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:42:31 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/15 14:42:44 by psergio-         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	unsigned int	length;

	length = ft_strlen(str);
	write(1, str, length);
}

int		main(int argc, char *argv[])
{
	if (argc < 0)
		ft_putstr("you mustn't see this\n");
	ft_putstr(argv[0]);
	write(1, "\n", 1);
}
