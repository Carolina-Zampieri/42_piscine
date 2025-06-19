/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:53:23 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/11 13:41:10 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 32 && str[x] <= 126))
			return (0);
		x++;
	}
	return (1);
}

/*int	main(void)
{
	char	test1[] = "C@&a";
	char	test2[] = "";
	char	test3[] = " ";

	printf("%d\n", ft_str_is_printable(test1));
	printf("%d\n", ft_str_is_printable(test2));
	printf("%d\n", ft_str_is_printable(test3));
}*/