/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:21:33 by pretch            #+#    #+#             */
/*   Updated: 2024/06/14 18:21:34 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 1;
	while (str[i])
	{
		if (!is_sep(str[i], sep))
		{
			if (word == 1)
				count++;
			word = 0;
		}
		else
			word = 1;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, int *index, char *sep)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	i = *index;
	while (is_sep(str[i], sep))
		i++;
	*index = i;
	while (str[i++] && !is_sep(str[i++], sep))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	i = 0;
	while (str[*index] && !is_sep(str[*index], sep))
	{
		word[i] = str[*index];
		i++;
		(*index)++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**words_arr;
	int		index;
	int		wc;
	int		i;

	i = 0;
	index = 0;
	wc = word_count(str, charset);
	words_arr = malloc(sizeof(char *) * (wc + 1));
	if (!words_arr)
		return (NULL);
	words_arr[wc] = 0;
	while (i < wc)
	{
		words_arr[i] = ft_strdup(str, &index, charset);
		i++;
	}
	return (words_arr);
}
