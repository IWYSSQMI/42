/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:46:18 by pngoende          #+#    #+#             */
/*   Updated: 2024/05/28 17:24:21 by pngoende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 'A') && (str[n] <= 'Z'))
		{
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int     main(void)
{
        char    *p;
        int     n;

        
        p = "12asdf34";
        n = ft_str_is_uppercase(p);
        printf("%d", n);
}*/
