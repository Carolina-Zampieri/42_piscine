/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:39:00 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/11 11:21:52 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= '0' && str[x] <= '9'))
			return (0);
		x++;
	}
	return (1);
}

/*int	main(void)
{
	char	test1[] = "19";
	char	test2[] = "1L";
	char	test3[] = "";

	printf("%d\n", ft_str_is_numeric(test1));
	printf("%d\n", ft_str_is_numeric(test2));
	printf("%d\n", ft_str_is_numeric(test3));
	return (0);
}*/
