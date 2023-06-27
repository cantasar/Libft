/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:28:01 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/27 16:57:02 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[0] != c && s[0])
		count++;
	while (s[i])
	{
		if (s[i] != '\0' && s[i - 1] == c)
			count++;
		i++;
	}
	printf("%d", count);
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;

	//**new_str = (char **)malloc(word_count(s, c) * sizeof(char));
	word_count(s, c);
	return (0);
}

int main(int argc, char const *argv[])
{
	ft_split("-aaaa-aaa-aaaa-a-", '-');
	return 0;
}
