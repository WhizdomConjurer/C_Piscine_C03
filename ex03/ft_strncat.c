/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:28:09 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/25 12:27:22 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x_1;
	unsigned int	x_2;

	x_1 = 0;
	x_2 = 0;
	while (dest[x_1] != '\0')
	{
		x_1++;
	}
	while (x_2 < nb && src[x_2] != '\0')
	{
		dest[x_1] = src[x_2];
		x_1++;
		x_2++;
	}
	dest[x_1] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = ": now we are together";
// 	char	dest[] = "I am single";

// 	printf("Destination String: %s \n", dest);
// 	printf("Source String: %s \n", src);
// 	ft_strncat(dest, src, 10);
// 	printf("Result: %s", dest);
// 	return (0);
// }
