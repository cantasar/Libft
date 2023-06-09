/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:51:20 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/08 12:41:09 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return ((void *)(temp - 1));
		temp++;
	}
	return (NULL);
}

int main(int argc, char const *argv[])
{
	const char	src[] = "abcdefg";
	printf("%s\n", ft_memchr(src, 65, 3));
	printf("%s\n", memchr(src, 65, 3));
	return 0;
}