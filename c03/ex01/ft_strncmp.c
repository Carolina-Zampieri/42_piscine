/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 07:51:29 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/16 08:23:52 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && x < n)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		else
		{
			x++;
		}
	}
	return (0);
}

/*int	main(void)
{
	char	s1[9] = "Piscine";
	char	s2[9] = "Piscina";
	unsigned int	n = 9;
	printf("%d", ft_strncmp(s1, s2, n));
	return(0);
}*/
