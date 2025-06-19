/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzampi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:41:34 by carzampi          #+#    #+#             */
/*   Updated: 2025/06/03 18:58:53 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{	
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 25;

	ft_swap(&a, &b);
	printf("Agora a é: %d\n", a);
	printf("Agora b é: %d", b);
	return(0);
}*/
