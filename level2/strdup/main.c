/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 08:57:23 by mcheng            #+#    #+#             */
/*   Updated: 2022/09/09 09:06:46 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
	int	i;
	char	*new;
	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (0);
	else if (new == NULL)
		return (0);
	while (src[i] != '\0')
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

int	main(int ac, char **av)
{
	char	*mine;
	char	*theirs;

	if (ac == 2)
	{
		mine = ft_strdup(av[1]);
		theirs = strdup(av[1]);
		printf("%s:\n:%s:\n", mine, theirs);
	}
	return (0);
}