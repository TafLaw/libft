/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:49:48 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/05/22 17:24:36 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert(unsigned int digi, int num, int n)
{
	unsigned int	rem;
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc((sizeof(char) * digi) + 1);
	if (str == NULL)
		return (NULL);
	while (i < digi)
	{
		rem = num % 10;
		str[i] = rem + '0';
		num = num / 10;
		i++;
	}
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char			*str;
	signed int		num;
	unsigned int	digi;

	digi = ft_digit_count(n);
	num = n;
	if (num < 0)
	{
		num = -num;
		digi--;
	}
	str = convert(digi, num, n);
	return (ft_strrev(str));
}
