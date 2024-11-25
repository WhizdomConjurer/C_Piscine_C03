/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:48:25 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/25 12:26:46 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x_1;
	int	x_2;

	x_1 = 0;
	x_2 = 0;
	while (dest[x_1] != '\0')
	{
		x_1++;
	}
	while (src[x_2] != '\0')
	{
		dest[x_1] = src[x_2];
		x_2++;
		x_1++;
	}
	dest[x_1] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[50] = "I am single";
// 	char	src[] = ": now we are together";

// 	printf("Destination String: %s \n", dest);
// 	printf("Source String: %s \n", src);
// 	ft_strcat(dest, src);
// 	printf("Result: %s", dest);
// 	return (0);
// }
