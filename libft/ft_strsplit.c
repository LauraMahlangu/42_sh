/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 08:39:20 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/06/07 08:39:25 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	size;
	int		i;
	int		start;

	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (ft_splitcounter(s, c) + 1))))
		return (NULL);
	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str[size++] = ft_strsub(s, start, i - start);
		}
	}
	str[size] = NULL;
	return (str);
}
