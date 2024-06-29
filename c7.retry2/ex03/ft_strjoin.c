/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pretch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:04:03 by pretch            #+#    #+#             */
/*   Updated: 2024/06/06 00:04:04 by pretch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strjoin(int size, char **strs, char *sep)
// {
// 	char	*str;
// 	int		i;
// 	int		j;
// 	int		k;
// 	int		len;

// 	len = 0;
// 	i = 0;
// 	len += (size - 1) * ft_strlen(sep);
// 	str = malloc(sizeof(char) * (len + 1));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	k = 0;
// 	while (i < size)
// 	{
// 		j = 0;
// 		while (strs[i][j])
// 			str[k++] = strs[i][j++];
// 		j = 0;
// 		while (sep[j] && i < size - 1)
// 			str[k++] = sep[j++];
// 		i++;
// 	}
// 	return (str);
// }

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

int	all_str_len(int size, char **strs)
{
	int		all_len;
	int		i;

	all_len = 0;
	i = 0;
	while (i < size)
		all_len += str_len(strs[i++]);
	return (all_len);
}

char	*just_cat(char *dest, char *src)
{
	char	*str1;

	str1 = dest;
	while (*str1 != '\0')
		str1++;
	while (*src != '\0')
	{
		*str1 = *src;
		str1++;
		src++;
	}
	*str1 = '\0';
	return (dest);
}

char	*just_join(char	*dest, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		just_cat(dest, strs[i]);
		if (i < size - 1)
			just_cat(dest, sep);
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		all_len;

	if (size <= 0)
	{
		joined = malloc(sizeof(char));
		joined[0] = '\0';
		return (joined);
	}
	all_len = all_str_len(size, strs);
	all_len += str_len(sep) * (size - 1);
	joined = malloc(sizeof(char) * (all_len + 1));
	if (!joined)
		return (NULL);
	joined[0] = '\0';
	return (just_join(joined, size, strs, sep));
}

// int main(void)
// {
// 	char *strs[3] = {"isala", "mala", "kum"};
// 	char *sep = "\n";
// 	char *str;

// 	str = ft_strjoin(3, strs, sep);
// 	printf("%s\n", str);
// }