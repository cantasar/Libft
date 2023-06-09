/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:03:35 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/07 15:37:51 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		s_len;
	char	*ps;

	s_len = ft_strlen(s);
	ps = (char *)s;
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}

int main(int argc, char const *argv[])
{
	char	a[] = "abc d";
	int		c = 'A';
	printf("1-%s\n", ft_strchr(a, c));
	printf("2-%s\n ", strchr(a, c));
	return (0);
}

