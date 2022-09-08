/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:01:52 by mcheng            #+#    #+#             */
/*   Updated: 2022/09/08 12:03:05 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

int	main(void)
{
	int	i;

	i = '0'; 
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}