/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstewart <tstewart@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:12:38 by tstewart          #+#    #+#             */
/*   Updated: 2024/09/11 19:54:10 by tstewart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size; // An integer to store the length of the string.
	char	*str; // A pointer to the original string.
	char	*copy; // A pointer to a copy of the original string.
}	t_stock_str; // Alias for "struct s_struct_str"

#endif
