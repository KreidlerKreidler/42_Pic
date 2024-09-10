/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkreidle <lkreidle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:14:44 by lkreidle          #+#    #+#             */
/*   Updated: 2024/09/08 17:14:46 by lkreidle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    int i = 0;

    if (str[i] == '\0')
        return 1;

    while (str[i] != '\0')
    {
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
        i++;
    }

    return 1;
}
