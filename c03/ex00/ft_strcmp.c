/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:08:26 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/15 18:25:28 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{	
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "Cadete";
	char	s2[] = "Cadete";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/
