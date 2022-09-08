/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:34:16 by mcheng            #+#    #+#             */
/*   Updated: 2022/09/08 11:45:34 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 0)
	{
		while (av[i] != NULL)
		{
			ft_putstr(av[ac - i]);
			write(1, "\n", 1);
			i++;
		}
		return (0);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}