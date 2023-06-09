/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:39:50 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/07 17:00:48 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	char	*ps;

	s_len = strlen(s);
	ps = (char *)s;
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)&s[s_len]);
		s_len--;
	}
	return (NULL);
}

int main(int argc, char const *argv[])
{
	char	a[] = "abc dazaxv";
	int		c = 'A';
	printf("1-%s-\n", ft_strrchr(a, c));
	printf("2-%s-\n ", strrchr(a, c));
	return (0);
}

