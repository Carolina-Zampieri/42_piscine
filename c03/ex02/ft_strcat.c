/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 09:34:05 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/16 13:38:24 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	while (src[x] != '\0')
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "Hello ";
	char	src[] = "World!";
	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
