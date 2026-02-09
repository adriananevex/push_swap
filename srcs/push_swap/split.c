/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 23:27:03 by aneves             #+#    #+#             */
/*   Updated: 2026/02/09 23:27:10 by aneves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int    count_words(char *s, char c)
{
    int count;
    int i;
    bool inside_word;

    count = 0;
    i = 0;
    while (s[i])
    {
        inside_word = false;
        while (s[i] == c)
            i++;
        while (s[i] != c && s[i])
        {
            if (!inside_word)
            {
                count++;
                inside_word = true;
            }
            i++;
        }
    }
    return (count);
}

static char *get_next_word(char *s, char c, int *cursor)
{
    char    *next_word;
    int     len;
    int     i;

    i = 0;
    while (s[*cursor] == c)
        (*cursor)++;
    len = 0;
    while (s[*cursor + len] && s[*cursor + len] != c)
        len++;
    next_word = malloc((size_t)len * sizeof(char) + 1);
    if (!next_word)
        return (NULL);
    while (s[*cursor] && s[*cursor] != c)
        next_word[i++] = s[(*cursor)++];
    next_word[i] = '\0';
    return (next_word);
}

char **split(char *s, char c)
{
    int     words_count;
    char    **result_array;
    int     i;
    int     cursor;

    i = 0;
    cursor = 0;
    words_count = count_words(s, c);
    if (!words_count)
        exit (1);
    result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
    if (!result_array)
        return (NULL);
    result_array[i] = malloc(sizeof(char));
    if (!result_array[i])
        return (NULL);
    result_array[i++][0] = '\0';
    while (i <= words_count)
        result_array[i++] = get_next_word(s, c, &cursor);
    result_array[i] = NULL;
    return (result_array);
}