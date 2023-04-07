#include <stdio.h>
int top = -1;
char arr[100];
void pop()
{
    if (top == -1)
        printf("Stack underflow");
    else
        top--;
}
void push(int e)
{
    top++;
    arr[top] = e;
}

char peek()
{
    return arr[top];
}

void postfix(char inf[])
{
    int p[100];
    p['('] = 0;
    p['-'] = 1;
    p['+'] = 2;
    p['/'] = 3;
    p['*'] = 4;
    for (int i = 0; inf[i] != '\0'; i++)
    {
        if (inf[i] == '+' || inf[i] == '-' || inf[i] == '*' || inf[i] == '/')
        {
            while (top != -1 && p[peek()] >= p[inf[i]])
            {
                printf("%c", peek());
                pop();
            }
            push(inf[i]);
        }
        else if (inf[i] == '(')
        {
            push('(');
        }
        else if (inf[i] == ')')
        {
            while (peek() != '(')
            {
                printf("%c", peek());
                pop();
            }
            pop();
        }
        else
        {
            printf("%c", inf[i]);
        }
    }
    while (top != -1)
    {
        printf("%c", peek());
        pop();
    }
}

int main()
{
    char infix[100];
    printf("Enter infix : ");
    scanf("%s", infix);
    postfix(infix);
}