/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:53:24 by ybouchra          #+#    #+#             */
/*   Updated: 2022/06/22 12:53:28 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char    *ft_strcat(char *dest, char *src)
{
    int    i;
    int    j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src [j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
