/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrudge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:18:20 by mrudge            #+#    #+#             */
/*   Updated: 2021/10/08 18:18:26 by mrudge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Возвращает кодовый номер символа, если приходит символ, если нет, то
 возвращает 0.*/

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		return (ch);
	return (0);
}
