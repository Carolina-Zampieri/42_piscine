/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:05:18 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/04 11:40:22 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	result;
	int	module;

	a = 100;
	b = 2;

	ft_div_mod(a, b, &result, &module);
	printf("O resultado da divisão é: %d\n", result);
	printf("O resto da divisão é: %d", module);
	return(0);
}*/
