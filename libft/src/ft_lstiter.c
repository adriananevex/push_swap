#include "../../libft.h"

void  ft_lstiter(T_list *lst, void (*f)(void))
{
  if (!lst || !f)
    return ;
  while (lst)
  {
    f(lst->content);
    lst = lst->next;
  }
}
