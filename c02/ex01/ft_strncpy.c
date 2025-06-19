/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 07:48:30 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/16 07:49:01 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

int	main(void)
{
	char	text1[6] = "Carol";
	char	text2[6] = "Oi";
	unsigned int	size = 3;
	ft_strncpy(text2, text1, size);
	printf("%s", text2);
	return(0);
}
