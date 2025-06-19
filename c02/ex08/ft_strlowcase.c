/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:22:49 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/11 14:28:49 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		x++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "PISCINA";

	printf("%s\n", ft_strlowcase(str));
	return (0);
}*/