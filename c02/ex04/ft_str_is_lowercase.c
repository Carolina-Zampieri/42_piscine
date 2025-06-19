/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:23:09 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/11 11:36:48 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'a' && str[x] <= 'z'))
			return (0);
		x++;
	}
	return (1);
}

/*int	main(void)
{
	char	test1[] = "cadete";
	char	test2[] = "Carol";
	char	test3[] = "";
	char	test4[] = "a12";

	printf("%d\n", ft_str_is_lowercase(test1));
	printf("%d\n", ft_str_is_lowercase(test2));
	printf("%d\n", ft_str_is_lowercase(test3));
	printf("%d\n", ft_str_is_lowercase(test4));

}*/