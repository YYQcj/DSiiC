void list_add(lst, value)
    struct list *lst;
    int value;
{
  struct lnode *curr =  (struct lnode*) malloc(sizeof(struct lnode));
  curr->value = value;
  curr->next = NULL;
  if (lst->tail == NULL) {
    lst->head = lst->tail = curr;
  } else {
    lst->tail->next = curr;
    lst->tail = curr;
  }
}

struct lnode * list_find(lst, value)
    struct list *lst;
    int value;
{
  struct lnode *curr;
  for (curr = lst->head; curr != NULL; curr = curr->next) {
    if (value == curr->value)
      return curr;
  }
  return NULL;
}

void list_remove(lst, value)
    struct list *lst;
    int value;
{
    struct lnode *curr, *prev;
  for (prev = NULL, curr = lst->head; curr != NULL; curr = curr->next) {
    if (value == curr->value) {
      if (prev == NULL) {
        curr->value = curr->next->value;
        
  }
  return NULL;
}