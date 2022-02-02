//
// Created by drcool on 1/25/22.
//

#include "singlyll.h"

void Append(NODE *head, int data)
{
    NODE *newnode;
    newnode = malloc(sizeof(NODE));
    newnode->data = data;
    newnode->next = NULL;
    head->next = newnode;
    head = newnode;


}

void Display(NODE *head)
{
    printf("\nLinked list: ");

    for(NODE *temp = head; temp != NULL; temp=temp->next)
    {
        printf("%i\t",temp->data);
    }

}
