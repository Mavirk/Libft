/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmurdoch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 23:16:40 by rmurdoch          #+#    #+#             */
/*   Updated: 2017/10/01 04:34:25 by rmurdoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char 	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	str = (char**)malloc(ft_countwords(s, c) + 1);
    ft_putnbr(ft_countwords(s, c));
	*str = "hello";
	return (str);
}

#include <stdio.h>	

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr((ft_strsplit(argv[1], '*'))[1]);
	}
	return (0);
}
