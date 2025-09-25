#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int info;
    struct node *next;
};

struct node *start, *new_node;
int count = 0;

struct node *create_node(int item)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = item;
    new_node->next = NULL;
    return new_node;
}

void insert_beg()
{
    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        new_node->next = start;
        start = new_node;
    }
}

void insert_end()
{
    if (start == NULL)
    {
        start = new_node;
    }
    else if (start->next == NULL)
    {
        start->next = new_node;
    }
    else
    {
        struct node *temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void insert_pos(int pos)
{
    if (count < pos)
    {
        cout << "Invalid position!, Enter a valid position\n";
    }
    else
    {
        struct node *temp = start;
        int n = 1;
        while (n <= pos)
        {
            temp = temp->next;
            n++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void delete_beg()
{
    if (start == NULL)
    {
        cout << "LL is empty\n";
    }
    else if (start->next == NULL)
    {
        cout << start->info;
        free(start);
    }
    else
    {
        struct node *temp = start;
        start = start->next;
        cout << temp->info;
        free(temp);
    }
}

void delete_end()
{
    if (start == NULL)
    {
        cout << "LL is empty\n";
    }
    else if (start->next == NULL)
    {
        cout << start->info;
        free(start);
    }
    else
    {
        struct node *temp = start;
        struct node *ptr = start;
        while (temp->next != NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
        cout << temp->info;
        ptr->next = NULL;
        free(temp);
    }
}

void delete_pos(int pos)
{
    if (count < pos)
    {
        cout << "Invalid position!, Enter a valid position\n";
    }
    else
    {
        struct node *temp = start;
        struct node *ptr;
        int n = 1;
        while (n <= pos)
        {
            ptr = temp;
            temp = temp->next;
            n++;
        }
        cout << temp->info;
        ptr->next = temp->next;
        free(temp);
    }
}

void display()
{
    if (start == NULL)
    {
        cout << "list is empty\n";
    }
    else
    {
        struct node *ptr;
        ptr = start;
        while (ptr != NULL)
        {
            cout << ptr->info << endl;
            ptr = ptr->next;
        }
    }
}

int main()
{

    int choice = 0, item;
    cout << "1.Insert at beginning.\n2.Display\n3.Exit\n4.Insert at the end\n5.Insert at a specified position.\n6.Delete from the beginning.\n7.Delete from the end.\n8.Delete from the specified position.";
    while (choice != 3)
    {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter item to be inserted:";
            cin >> item;
            new_node = create_node(item);
            insert_beg();
            cout << "item inserted\n";
            count++;
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        case 4:
            cout << "enter item to be inserted:";
            cin >> item;
            new_node = create_node(item);
            insert_end();
            cout << "item inserted";
            count++;
            break;
        case 5:
            int pos;
            cout << "enter item to be inserted:";
            cin >> item;
            cout << "enter position:";
            cin >> pos;
            new_node = create_node(item);
            insert_pos(pos);
            cout << "item inserted";
            count++;
            break;
        case 6:
            delete_beg();
            count--;
            break;
        case 7:
            delete_end();
            count--;
            break;
        case 8:
            cout << "Enter position:";
            cin >> pos;
            delete_pos(pos);
            count--;
            break;
        case 9:
            cout<<count;
            break;
        default:
            cout<< "Invalid choice";
        }
    }
}
