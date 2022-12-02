/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 05:49:16 by ybouchra          #+#    #+#             */
/*   Updated: 2022/06/21 06:23:04 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char    *ft_strcapitalize(char *str)
{
    int    i;

    i = 0;
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    
    }
    i=1;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if (! (str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'z') && str[i +1 ] >= 'a' && str[i + 1] <= 'z')
    
//             if( str[i +1] >= 'a' && str[i +1] <= 'z')
        {
            str[i +1] -= 32;
            i++;
        }
    
        i++;
    }
    return (str);
}

#include <stdio.h>
int main()
{
    char c[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
printf("%s",ft_strcapitalize(c));
} 
