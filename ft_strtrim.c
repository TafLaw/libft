/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:36:10 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/06/03 17:55:07 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*fresh;
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return ((char *)s + i);
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	fresh = (char *)malloc(sizeof(char) * (len - i + 2));
	if (fresh != NULL)
	{
		while (s[i + j] != '\0' && j < len - i + 1)
		{
			fresh[j] = s[i + j];
			j++;
		}
	}
	fresh[j] = '\0';
	return (fresh);
}
