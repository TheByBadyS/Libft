/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:13:16 by marvin            #+#    #+#             */
/*   Updated: 2022/10/31 14:13:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Lib/libft.h" 

void *ft_memset(void *b, int c, size_t len)
{
    int i;

    i = 0;
    if (b != 0)
    {
        while (len != 0)
        {
            ((unsigned char *)b)[i] = c; // unsigned'i sil sadece char ile dene hata var mı ve ikinci parantezsiz dene.
            i++;
            len--;
        }
    }
    return(b);
}

 
//  int	main()
// {
// 	char str[10];
// 	strcpy(str, "Merhaba");
// 	puts(str);
// 	ft_memset(str, '$', 5);
// 	puts(str);
// }

//  int main()
//  {
//     char    a[7] = "Hello";
//     char *str = (char *)ft_memset(a, 's', 3);
//     printf("%s\n", str);
//     // ft_memset(a, 's', 3);
//     // puts(a);
//  }
 