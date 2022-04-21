/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoler-e <mdiogenes@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:29:14 by msoler-e          #+#    #+#             */
/*   Updated: 2021/11/16 09:45:13 by msoler-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_cont(char *src)
{
	unsigned int	size;

	size = 0;
	while (*src != '\0')
	{
		size++;
		src++;
	}
	return (size);
}

int	calculate_return(int osize, int dest_size, int src_size, int full_size)
{
	if (osize == 0)
		return (src_size);
	if (dest_size > src_size)
	{
		if (full_size > (src_size + osize))
			return (src_size + osize);
		return (full_size);
	}
	if (src_size > dest_size)
	{
		if (osize < dest_size && osize < src_size)
			return (src_size + osize);
	}
	return (full_size);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int len)
{
	unsigned int	pos;
	int				dest_size;
	int				src_size;
	int				full_size;
	unsigned int	resul;

	dest_size = ft_cont(dst);
	src_size = ft_cont(src);
	full_size = dest_size + src_size;
	pos = ft_cont(dst);
	if (len <= pos)
		return (dest_size + len + 1);
	len--;
	while (pos < len && *src)
	{
		dst[pos++] = *src;
		src++;
	}
	resul = calculate_return(len, dest_size, src_size, full_size);
	dst[pos] = 0;
	return (resul);
}
