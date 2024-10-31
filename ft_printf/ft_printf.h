/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npizzi <npizzi@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:55:41 by npizzi            #+#    #+#             */
/*   Updated: 2024/09/23 15:16:09 by npizzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_Hù

# include <stdarg.h>
# include <unistd.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_MODE_RESET "\x1b[0m"

#define MODE_BOLD "\x1b[1m"
#define MODE_DIM "\x1b[2m"
#define MODE_ITALIC "\x1b[3m"
#define MODE_UNDERLINE "\x1b[4m"
#define MODE_BLINKING "\x1b[5m"
#define MODE_REVERSE "\x1b[7m"
#define MODE_STRIKETHROUGH "\x1b[9m"

int		is_valid_type(char c);
int		ft_printf(const char *s, ...);
void	determine_type(char c, va_list *arg, int *printed_chars);
void	ft_print_ux_xupper(va_list *ap, char mode, int *printed_chars);
void	ft_print_p(va_list *ap, int *printed_chars);
void	ft_print_s(va_list *ap, int *printed_chars);
void	ft_print_cdi(va_list *ap, char mode, int *printed_chars);
void	print_string(const char *s, va_list *ap, int *printed_chars);
#endif
