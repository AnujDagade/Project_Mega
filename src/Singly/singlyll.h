//
// Created by drcool on 1/25/22.
//

#ifndef PROJECT_MEGA_SINGLYLL_H
#define PROJECT_MEGA_SINGLYLL_H

#endif //PROJECT_MEGA_SINGLYLL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

void Append(NODE *head, int data);
void Display(NODE *head);