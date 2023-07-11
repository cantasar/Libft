/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:35:41 by ctasar            #+#    #+#             */
/*   Updated: 2023/07/11 19:08:14 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*buc;

	i = 0;
	buc = (char *)s;
	while (n--)
	{
		buc[i] = c;
		i++;
	}
	s = buc;
	return (s);
}

int main(int argc, char const *argv[])
{
	char str1[5] = "abcde";
	char str2[5] = "abcde";
	printf("%s\n", memset(str1, 'a', 3));

	printf("%s ", ft_memset(str2, 'a', 3));
	return 0;
}
