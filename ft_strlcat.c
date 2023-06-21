/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:51:11 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/12 14:35:30 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	int		i;
	int		j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	printf("dst size: %d, dstlen: %d\n", dstsize, ft_strlen(dst));
	if (dst_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dst_len + i < dstsize - 1)
		{
			dst[j++] = src[i++];
		}
		dst[j] = '\0';
	}
	if (dst_len >= dstsize)
		dst_len = dstsize;
	return (dst_len + src_len);
}

int main(int argc, char const *argv[])
{
	char dest[20] = "dest";
	char src[] = "srcsrcsrc";
	ft_strlcat(dest, src, 5);
	//strlcat(dest, src, 10);

	printf("--%s\n", dest);

	return 0;
}
