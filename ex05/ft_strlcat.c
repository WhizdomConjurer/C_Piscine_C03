/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:25:16 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/25 12:35:01 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	x;

	x = 0;
	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len < size)
	{
		while (x < size - dest_len - 1 && src[x] != '\0')
		{
			dest[dest_len + x] = src[x];
			x++;
		}
		dest[dest_len + x] = '\0';
	}
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char	dest[45] = "I am single";
// 	char	src[] = ": now we are together";
// 	unsigned int	x;

// 	x = ft_strlcat(dest, src, 45);
// 	printf("Length from dest + src: %d", x);
// 	return (0);
// }