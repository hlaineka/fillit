/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmakela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:37:31 by jmakela           #+#    #+#             */
/*   Updated: 2019/11/05 18:05:46 by jmakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes of string pointed to by src to buffer pointed by dest.
** If there is no null byte among n bytes of src,
** the string placed in dest will not be null-terminated.
** Return a pointer to the destination string dest.
*/

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (!len)
		return (dest);
	while (len)
	{
		dest[i] = src[i];
		i = i + 1;
		len = len - 1;
	}
	i = i - 1;
	while (i > ft_strlen(src))
	{
		dest[i] = '\0';
		i = i - 1;
	}
	return (dest);
}
