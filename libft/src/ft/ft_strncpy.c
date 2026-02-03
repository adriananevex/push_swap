#include "../../inc/libft.h"

size_t ft_strncpy(char *dst, const char *src, size_t dst_size)
{
    size_t src_size;
    const char *src_ptr;
    char *dst_ptr;
	size_t p;

    src_size = 0;
	src_ptr = src;
	dst_ptr = dst;
    while (*src_ptr != '\0')
    {
        src_size++;
        src_ptr++;
    }
    if (dst_size == 0 || dst == NULL)
        return (src_size);
    p = 0;
    while (p < (dst_size - 1) && *src != '\0')
    {
        *dst_ptr = *src;
        dst_ptr++;
        src++;
        p++;
    }
    *dst_ptr = '\0';
    return (src_size);
}