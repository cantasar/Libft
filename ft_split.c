/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctasar <ctasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:28:01 by ctasar            #+#    #+#             */
/*   Updated: 2023/06/28 14:47:11 by ctasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
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
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	//printf("%s / word count %d\n", s, count);
	return (count);
}

static int	char_count(char const *s, char sep, int i)
{
	int	count;

	count = 0;
	while (s[i] && s[i] == sep)
		i++;
	while (s[i] && s[i++] != sep)
		count++;
	//printf("char count s %s sep %c int i %d  return-%d\n", s, sep, i, count);
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		tmp;
	char	**new_str;

	new_str = (char **)malloc(word_count(s, c) * sizeof(char *) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i++ < word_count(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j] && s[j] != c)
		{
			new_str[i] = (char *)malloc(char_count(s, c, j) * sizeof(char) + 1);
			k = 0;
			while (s[j] && s[j] != c)
				new_str[i][k++] = s[j++];
			j++;
		}
		printf("%d %s\n", i, new_str[i]);
	}
	new_str[i] = NULL;
	printf("%d %s\n", i, new_str[i]);
	return (0);
}

int	main(void)
{
	ft_split("aaaa----aaa-----aa-a----aaaa-aaa---aa----a", '-');
	return 0;
}
