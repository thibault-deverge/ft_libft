/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeverge <tdeverge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:41:08 by tdeverge          #+#    #+#             */
/*   Updated: 2022/10/10 01:41:14 by tdeverge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	is_whitespace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int		sum;
	size_t			is_neg;
	size_t			i;

	i = 0;
	sum = 0;
	is_neg = 0;
	while (is_whitespace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			is_neg = 1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		sum = (sum * 10) + (nptr[i] - '0');
		i++;
	}
	if (is_neg)
		return (sum * -1);
	return (sum);
}
