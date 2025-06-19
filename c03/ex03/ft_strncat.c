/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:39:41 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/17 15:00:11 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	while (src[x] != '\0' && x < nb)
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}

/*int     main(void)
{
	char	dest[20] = "Hello ";
	char	src[] = "World!";
	printf("%s", ft_strncat(dest, src, 3));
	return (0);
}*/