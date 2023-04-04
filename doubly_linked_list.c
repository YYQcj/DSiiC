#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000

struct dllnode
{
    char *text;
    struct dllnode *prev;
    struct dllnode *next;
};

int main(int argc, char const *argv[])
{
    struct dllnode *head = NULL;
    struct dllnode *tail = NULL;
    struct dllnode *curr;
    char buff[MAXLINE];

    while (fgets(buff, MAXLINE, stdin)) {
        curr = (struct dllnode *) malloc(sizeof(struct dllnode));
        curr->text = (char *) malloc(strlen(buff) + 1);
        strcpy(buff, curr->text);
        curr->prev = tail; 
        curr->next = NULL;
        tail = curr;
        if (head == NULL) head = curr;
    }

    for (curr = tail; curr != NULL; curr = curr->prev)
        printf("%s\n", curr->text);
    return 0;
}
