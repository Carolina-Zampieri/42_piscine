/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 10:50:53 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/05 12:10:04 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 25;

	ft_ultimate_div_mod(&a, &b);
	printf("O resultado da divisão é: %d\n", a);
	printf("O resultado do modulo da divisão é: %d", b);
	return(0);
}*/
