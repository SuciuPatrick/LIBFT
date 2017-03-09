/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuciu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 20:32:52 by psuciu            #+#    #+#             */
/*   Updated: 2017/03/08 18:53:03 by psuciu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	start_s;
	char	*new;

	start_s = start;
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (new)
	{
		i = 0;
		while (i < len)
		{
			new[i] = s[i + start_s];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
