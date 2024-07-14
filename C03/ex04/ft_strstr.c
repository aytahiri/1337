/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aytahiri <aytahiri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:06:43 by aytahiri          #+#    #+#             */
/*   Updated: 2024/07/10 09:20:53 by aytahiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a])
	{
		b = 0;
		while (to_find[b] && str[a + b] == to_find[b])
			b++;
		if (to_find[b] == '\0')
			return (&str[a]);
		a++;
	}
	return (0);
}
