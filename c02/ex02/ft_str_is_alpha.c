/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 14:40:50 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/12 11:23:49 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'a' || str[x] > 'z')
			&& (str[x] < 'A' || str[x] > 'Z'))
			return (0);
		x++;
	}
	return (1);
}

/*int	main(void)
{
	char	test1[] = "Carol";
	char	test2[] = "@";
	char	test3[] = "ca1234";
	char	test4[] = "";

	printf("%d\n", ft_str_is_alpha(test1));
	printf("%d\n", ft_str_is_alpha(test2));
	printf("%d\n", ft_str_is_alpha(test3));
	printf("%d\n", ft_str_is_alpha(test4));
	return(0);

}*/