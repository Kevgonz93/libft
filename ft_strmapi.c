/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kegonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:55:55 by kegonzal          #+#    #+#             */
/*   Updated: 2024/09/25 16:55:57 by kegonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				size;
	char			*result;
	int				i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	result = (char *)ft_calloc(size + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
