/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:42:23 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/05/20 17:57:56 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;

	i = ft_strlen(s) - 1;
	len = i;
	while (s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)&s[len]);
	return (NULL);
}
