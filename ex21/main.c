/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:51:28 by cnysten           #+#    #+#             */
/*   Updated: 2021/10/29 13:00:04 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	*range;

	range = ft_range(-5, 5);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", range[i]);
		i++;
	}
}