/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:35:15 by mcheng            #+#    #+#             */
/*   Updated: 2022/09/08 11:04:24 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	while ((str[i] == 45 || str[i] == 43))
	{
		if (str[i] == 45)
		{
			sign = -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

int	main(void)
{
	char	str[] = "   -123abc";
	printf("%d", ft_atoi(str));
}
