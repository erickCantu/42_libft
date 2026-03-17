/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecantu-p <ecantu-p@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 12:05:04 by ecantu-p          #+#    #+#             */
/*   Updated: 2026/02/11 19:11:59 by ecantu-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Description: 
        Allocates memory (using malloc(3)) and returns an array of strings 
        obtained by splitting ’s’ using the character ’c’ as a delimiter. 
        The array must end with a NULL pointer.
    
    Return value:
        The array of new strings resulting from the split. NULL if the 
        allocation fails.
    
    Parameters:
        s: The string to be split.
        c: The delimiter character.

    External Function:
        malloc, free
*/

#include "libft.h"

static int	ft_split_count(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s == c)
	{
		s++;
	}
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		i++;
	}
	return (i);
}

static void	ft_split_free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*ft_split_cpy_str(const char *s_cpy, int i)
{
	int		k;
	char	*str;

	k = 0;
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (k < i)
	{
		str[k] = *s_cpy;
		k++;
		s_cpy++;
	}
	str[k] = '\0';
	return (str);
}

static int	ft_split_save_str(int str_cnt, char **arr_str, const char *s_cpy, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < str_cnt)
	{
		while (*(s_cpy) == c && *s_cpy)
			s_cpy++;
		while (*(s_cpy + i) && *(s_cpy + i) != c)
			i++;
		arr_str[j] = ft_split_cpy_str(s_cpy, i);
		if (!arr_str[j])
		{
			ft_split_free_arr(arr_str);
			return (0);
		}
		if (j < (str_cnt + 1))
			s_cpy += (i + 1);
		i = 0;
		j++;
	}
	arr_str[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_str;
	int		err_check;
	int		len_s;

	if (!s)
		return (NULL);
	len_s = ft_split_count(s, c);
	arr_str = (char **)ft_calloc((len_s + 1), sizeof(char *));
	if (!arr_str)
		return (NULL);
	err_check = 1;
	err_check = ft_split_save_str(len_s, arr_str, s, c);
	if (err_check == 0)
		return (NULL);
	return (arr_str);
}

// int	main(void)
// { 
// 	char **p_argv;
// 	int	i;
	
// 	char *argv[] = {"push_swap_double_link.out", "24752 10523 9056 7702 14502 13699 45905 40677 5706 33602 45086 18945 2025 9216 18751 32202 43298 15351 37916 5566 21701 24499 38401 25605 9269 10230 10404 4895 12763 26285 36916 11186 13464 15374 1619 37665 22205 15220 20273 45429 29626 530 23953 30009 45287 44308 33660 33945 11788 16197 7128 9959 13118 3089 28264 15914 6345 13355 49334 13469 46372 8705 8143 42167 5741 33002 29370 48754 12992 44852 230 29543 36177 27472 20125 41113 6645 7366 11993 27983 17887 28569 19308 11018 34622 7234 18442 18738 5951 2287 27340 37745 3661 18430 19379 17314 30971 10197 29693 9468", '\0'};

// 	p_argv = ft_split(argv[1], ' ');

// 	i = 0;
// 	while (p_argv[i])
// 	{
// 		free(p_argv[i]);
// 		i++;
// 	}
// 	free(p_argv);
	
// }