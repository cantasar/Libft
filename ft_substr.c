/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 21:28:57 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/24 18:18:09 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	int		j;

	if (ft_strlen(s) == 0 || len == 0)
		return (strdup(""));
	i = 0;
	while (i < len && s[i + start])
		i++;
	substr = (char *)malloc(len);
	j = 0;
	if (!substr)
		return (NULL);

	while (j < i)
	{
		substr[j] = s[j + start];
		j++;
	}
	printf("%s", substr);
	return (substr);

}

int main(int argc, char const *argv[])
{
	char *a = "abcdesfghijk";
	ft_substr(a, 0, 13);
	return 0;
}
