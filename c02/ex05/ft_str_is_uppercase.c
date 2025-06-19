/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:38:05 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/11 11:52:21 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'A' && str[x] <= 'Z'))
			return (0);
		x++;
	}
	return (1);
}

/*int	main(void)
{
	char	test1[] = "";
	char	test2[] = "MAIORAL";
	char	test3[] = "Carol";
	char	test4[] = "C3";

	printf("%d\n", ft_str_is_uppercase(test1));
	printf("%d\n", ft_str_is_uppercase(test2));
	printf("%d\n", ft_str_is_uppercase(test3));
	printf("%d\n", ft_str_is_uppercase(test4));

}*/