/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuciu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 20:46:27 by psuciu            #+#    #+#             */
/*   Updated: 2017/03/08 18:12:15 by psuciu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lenght1;
	int		lenght2;
	char	*new;
	int		i;

	lenght1 = ft_strlen(s1);
	lenght2 = ft_strlen(s2);
	new = (char*)malloc(sizeof(char) * (lenght1 + lenght2 + 1));
	if (new)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			new[i] = s1[i];
			i++;
		}
		while (s2[i - lenght1] != '\0')
		{
			new[i] = s2[i - lenght1];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
